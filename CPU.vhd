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
    Port ( CLK : in  STD_LOGIC;
		ting : out STD_LOGIC	 
	 );
end CPU;

architecture Behavioral of CPU is 

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
           CarryIN : in  STD_LOGIC;
			  ISZERO : out STD_LOGIC);
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
           we1 : in  STD_LOGIC;
			  we2 : in STD_LOGIC);
end component;

component Instruction_Decoder is
    Port ( CLK : in STD_LOGIC; 
			  CMD : in  STD_LOGIC_VECTOR (15 downto 0);
			  ARG1 : in STD_LOGIC_VECTOR (15 downto 0); 
			  ARG2 : in STD_LOGIC_VECTOR (15 downto 0); 
			  ARG3 : in STD_LOGIC_VECTOR (15 downto 0); 
			  PCINC : out STD_LOGIC_VECTOR (1 downto 0); 
           ALUControl : out STD_LOGIC_VECTOR(5 downto 0); 
			  RegOutEN : out STD_LOGIC_VECTOR(1 downto 0); 
			  REGwe : out  STD_LOGIC_VECTOR (1 downto 0);
           REGaddr1 : out  STD_LOGIC_VECTOR (1 downto 0);
           REGaddr2 : out  STD_LOGIC_VECTOR (1 downto 0);
			  PROGoutEn : out STD_LOGIC;
			  JUMP : out STD_LOGIC_VECTOR(1 downto 0)); 
end component;

component ProgramStore is 
	    Port ( INST : out  STD_LOGIC_VECTOR (15 downto 0);
			  ARG1 : out STD_LOGIC_VECTOR (15 downto 0); 
			  ARG2 : out STD_LOGIC_VECTOR (15 downto 0); 
			  ARG3 : out STD_LOGIC_VECTOR (15 downto 0); 
           ADDR : in  STD_LOGIC_VECTOR (5 downto 0);
           WE : in  STD_LOGIC);
end component; 

signal start, JUMP : STD_LOGIC_VECTOR (1 downto 0):= "00"; 

signal A, B, C : STD_LOGIC_VECTOR (15 downto 0) := X"0000"; 
signal PC : STD_LOGIC_VECTOR(5 downto 0) := "000000";
signal cmd, INST, ARG1, ARG2, ARG3 : STD_LOGIC_VECTOR (15 downto 0); 

-- control signals
signal addr1, addr2, REGwe : STD_LOGIC_VECTOR (1 downto 0) := "00"; 
signal REGoutEN, PCINC : STD_LOGIC_VECTOR (1 downto 0) := "00"; 
signal progOutEN, ISZERO : STD_LOGIC := '0' ; 
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
	CarryOut => ting,
	ISZERO => ISZERO);
	
REGS : Registers port map(
	clk => clk, 
	addr1 => addr1,
	addr2 => addr2, 
	datain => C,
	dataout1 => A,
	dataout2 => B,
	out1enable => REGoutEN(1),
	out2enable => REGoutEN(0), 
	we1 => REGwe(1), 
	we2 => REGwe(0));
	
IntstructionDcoder1 : Instruction_decoder port map(
	CLK => CLK,
	CMD => CMD,
	ARG1 => ARG1,
	ARG2 => ARG2,
	ARG3 => ARG3, 
	ALUControl => ALUControl,
	REGoutEN => REGoutEN, 
	REGwe => REGwe,
	REGaddr1 => addr1,
	REGaddr2 => addr2,
	ProgOutEn => ProgOutEn,
	PCINC => PCINC,
	JUMP => JUMP); 

PROG1 : ProgramStore port map(
	INST => INST,  
	ARG1 => ARG1,
	ARG2 => ARG2,
	ARG3 => ARG3,
	ADDR => PC,
	WE => '1'
); 


process(clk, start, PCINC, INST)
	begin
		if(clk'event and clk = '1') then
			if start = "11" then
				if ((JUMP = "01") or (JUMP = "10" and ISZERO = '1') ) then
					PC <= ARG1(5 downto 0);
				else 
					PC <= PC + 1 + PCINC; 
				end if; 
				
				else 
					cmd <= INST; 
					start <= "11"; 
			end if; 
		end if; 
		if start = "11" then 
			cmd <= INST; 
		end if;
				
end process; 

process(progOutEn, ARG1, JUMP)
begin
	if (progOutEn = '1' ) then
		A(15 downto 0) <= ARG1;
	else 
		A <= "ZZZZZZZZZZZZZZZZ"; 
	end if; 
end process; 			
end Behavioral;
