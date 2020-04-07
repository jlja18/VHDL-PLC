----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:10:44 03/27/2020 
-- Design Name: 
-- Module Name:    Instruction_Decoder - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Instruction_Decoder is
	 generic(
				AtoC : STD_LOGIC_VECTOR (5 downto 0) := "011000"; 
				BtoC : STD_LOGIC_VECTOR (5 downto 0) := "010100";
				InvertA : STD_LOGIC_VECTOR (5 downto 0) := "011010";
				InvertB : STD_LOGIC_VECTOR (5 downto 0) := "101100";
				AaddB : STD_LOGIC_VECTOR (5 downto 0) := "111100";
				AaddBadd1 : STD_LOGIC_VECTOR (5 downto 0) := "111101"; 
				Aadd1 : STD_LOGIC_VECTOR (5 downto 0) := "111001"; 
				Badd1 : STD_LOGIC_VECTOR (5 downto 0) := "110101"; 
				BsubA : STD_LOGIC_VECTOR (5 downto 0) := "111111"; 
				Bsub1 : STD_LOGIC_VECTOR (5 downto 0) := "110110"; 
				subA  :STD_LOGIC_VECTOR (5 downto 0) := "111011"; 
				AandB : STD_LOGIC_VECTOR (5 downto 0) := "001100"; 
				AorB  : STD_LOGIC_VECTOR (5 downto 0) := "011100"; 
				ZtoC  : STD_LOGIC_VECTOR (5 downto 0) := "010000"; 
				OnetoC  : STD_LOGIC_VECTOR (5 downto 0) := "110001"; 
				sub1toC : STD_LOGIC_VECTOR (5 downto 0) := "110010"
				
	 ); 
    Port ( 
			  CLK : in STD_LOGIC; 
			  CMD : in  STD_LOGIC_VECTOR (15 downto 0);
			  ARG1 : in STD_LOGIC_VECTOR (15 downto 0); 
			  ARG2 : in STD_LOGIC_VECTOR (15 downto 0); 
			  ARG3 : in STD_LOGIC_VECTOR (15 downto 0); 
           ALUControl : out STD_LOGIC_VECTOR (5 downto 0); 
			  RegOutEN : out STD_LOGIC_VECTOR (1 downto 0); 
			  REGwe : out STD_LOGIC_VECTOR (1 downto 0);
			  REGaddr1 : out  STD_LOGIC_VECTOR (1 downto 0);
           REGaddr2 : out  STD_LOGIC_VECTOR (1 downto 0);
			  PROGoutEn : out STD_LOGIC;
			  PCReadEN : out STD_LOGIC;
			  PCINC : out STD_LOGIC_VECTOR (1 downto 0)); 
end Instruction_Decoder;

architecture Behavioral of Instruction_Decoder is

begin
	Process(cmd, ARG1, ARG2, ARG3) 
	begin
		case (cmd) is
			when X"0000" => 
				REGoutEN <="00"; 
				REGwe <= "00"; 
				PROGoutEN <= '0'; 
				PCReadEN <= '0';
				PCINC <= "00"; 
			when X"0001" => -- ADD TWO REGISTERS
				REGaddr1 <= ARG1(1 downto 0); 
				REGaddr2 <= ARG2(1 downto 0); 
				PCINC <= "10"; 
				ALUControl <= AaddB; 
				REGoutEN <= "11"; 
				REGwe <= "10"; 
				ProgOUTEN <= '0'; 
				PCReadEN <= '0';
			when X"0002" => --LOAD VALUE TO REGISTER
				REGaddr1 <= ARG2(1 downto 0); 
				PCINC <= "10"; 
				ALUControl <= AtoC; 
				REGoutEN <= "01"; 
				REGwe <= "10"; 
				PROGoutEN <= '1'; 
				PCReadEN <= '0';
			when X"0003" => --GOTO VALUE
				ALUControl <= AtoC; 
				RegOutEN <= "00";  
				REGwe <= "00"; 
				PROGoutEN <= '1'; 
				PCReadEN <= '1';
			when X"0004" => -- jump if equal not done
				REGaddr1 <= cmd(9 downto 8); 
				REGaddr2 <= cmd(1 downto 0); 
			   ALUcontrol <= BsubA; 
				REGOutEN <= "11";
			when others =>
				REGOutEN <="00"; 
				REGwe <= "00"; 
				PROGoutEN <= '0'; 
				PCReadEN <= '0';
			end case; 
	end process; 


end Behavioral;

