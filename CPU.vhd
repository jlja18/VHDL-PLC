----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:01:47 03/26/2020 
-- Design Name: 
-- Module Name:    CPU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CPU is
	--Generic (BITHighIMPLow : STD_LOGIC_VECTOR :=  "LLLLLLLLLLLLLLLL" ); 
	
    Port ( CLK : in  STD_LOGIC;
		ting : out STD_LOGIC	 
	 );
end CPU;

architecture Behavioral of CPU is 
type ram_type is array (0 to 63) of STD_LOGIC_VECTOR (7 downto 0);
type program_mem is array (0 to 63) of STD_LOGIC_VECTOR (19 downto 0); 
	    signal PROG : program_mem := (X"20005", X"20103", X"10001", X"00000", X"00000", X"00005", X"00000", X"00000",
                                      X"00000", X"00800", X"01000", X"00008", X"00009", X"00000", X"00000", X"00002",
                                      X"F000F", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000",
                                      X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000",
                                      X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000",
                                      X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000",
                                      X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000",
                                      X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000", X"00000");
	signal MEM : ram_type; 

component ALU is
    Port ( Fselect : in  STD_LOGIC_VECTOR (1 downto 0);
           INVA : in  STD_LOGIC;
			  ENA : in STD_LOGIC;
			  ENB : in STD_LOGIC; 
           A : in  STD_LOGIC_VECTOR (15 downto 0);
           B : in  STD_LOGIC_VECTOR (15 downto 0);
           C : out  STD_LOGIC_VECTOR (15 downto 0);
			  INC : in STD_LOGIC; 
           CarryOUT : out  STD_LOGIC;
           CarryIN : in  STD_LOGIC);
end component;

component Registers is
    Port ( clk : in STD_LOGIC; 
			  addr1 : in  STD_LOGIC_VECTOR (1 downto 0);
			  addr2 : in  STD_LOGIC_VECTOR (1 downto 0);
           datain : in  STD_LOGIC_VECTOR (15 downto 0);
           dataout1 : out  STD_LOGIC_VECTOR (15 downto 0);
			  dataout2 : out STD_LOGIC_VECTOR (15 downto 0);
			  out1enable : in STD_LOGIC; 
			  out2enable : in std_logic; 
           we : in  STD_LOGIC);
end component;

component Instruction_Decoder is
    Port ( CMD : in  STD_LOGIC_VECTOR (19 downto 0);
           ALUControl : out STD_LOGIC_VECTOR(5 downto 0); 
           RegAOutEN : out  STD_LOGIC;
           RegBOutEN : out STD_LOGIC; 
			  RegReadEN : out  STD_LOGIC;
           REGaddr1 : out  STD_LOGIC_VECTOR (1 downto 0);
           REGaddr2 : out  STD_LOGIC_VECTOR (1 downto 0);
			  PROGoutEn : out STD_LOGIC;
			  PCReadEN : out STD_LOGIC); 
end component;

signal start : std_logic := '0'; 

signal A, B, C : STD_LOGIC_VECTOR (15 downto 0) := X"0000"; 
signal PC : STD_LOGIC_VECTOR(5 downto 0) := "000000";
signal cmd : STD_LOGIC_VECTOR(19 downto 0) := X"00000"; 

-- control signals
signal addr1, addr2 : STD_LOGIC_VECTOR (1 downto 0) := "00"; 
signal regwe, RegAOutEn, RegBOutEn: STD_LOGIC := '0'; 
signal progOutEN : STD_LOGIC := '0' ; 
signal PCreaden : STD_LOGIC := '0'; 
signal ALUControl : STD_LOGIC_VECTOR (5 downto 0); 

begin
ALU1 : ALU port map(
	Fselect => ALUControl(5 downto 4),
	INVA => ALUControl(1),
	ENA => ALUControl(3),
	ENB => ALUControl(2),
	A => A, 
	B => B, 
	C => C,
	INC => ALUControl(0), 
	CarryIN => '0',
	CarryOut => ting);
	
REGS : Registers port map(
	clk => clk, 
	addr1 => addr1,
	addr2 => addr2, 
	datain => C,
	dataout1 => A,
	dataout2 => B,
	out1enable => RegAOutEn,
	out2enable => RegBOutEn, 
	we => regwe);
	
IntstructionDcoder1 : Instruction_decoder port map(
	cmd => cmd,
	ALUControl => ALUControl,
	RegAOutEN => RegAOutEN,
	RegBOutEN => RegBOutEN, 
	RegReadEN => regwe,
	REGaddr1 => addr1,
	REGaddr2 => addr2,
	ProgOutEn => ProgOutEn,
	PCreaden => PCreaden); 

process(clk, start, PROG)
	begin
		if(clk'event and clk = '1') then
			if start = '1' then
				if (PCReadEN = '1') then
					PC <= C(5 downto 0);
				else 
					pc <= pc + 1 ;
				end if; 
			else 
				start <= '1'; 
				PC <= PC; 
			end if; 

		   if start = '0' then 
				cmd <= X"00000"; 
			else 
				cmd <= PROG(conv_integer(PC)); 
			end if; 
		end if; 
end process; 

process(cmd, progOutEn)
	begin
	if (progOutEn = '1') then
		A(3 downto 0) <= cmd(3 downto 0);
	else 
		A <= "ZZZZZZZZZZZZZZZZ"; 
	end if; 
	end process; 			

	
end Behavioral;






