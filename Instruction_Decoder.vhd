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
    Port ( CMD : in  STD_LOGIC_VECTOR (19 downto 0);
           ALUControl : out STD_LOGIC_VECTOR; 
           RegAOutEN : out  STD_LOGIC;
           RegBOutEN : out STD_LOGIC; 
			  RegReadEN : out  STD_LOGIC;
           REGaddr1 : out  STD_LOGIC_VECTOR (1 downto 0);
           REGaddr2 : out  STD_LOGIC_VECTOR (1 downto 0);
			  PROGoutEn : out STD_LOGIC;
			  PCReadEN : out STD_LOGIC); 
end Instruction_Decoder;

architecture Behavioral of Instruction_Decoder is

begin
	Process(cmd) 
	begin
		case (cmd(19 downto 16)) is
			when X"0" => 
				RegAOutEN <= '0'; 
				RegBOutEN <= '0'; 
				RegReadEN <= '0'; 
				PROGoutEN <= '0'; 
				PCReadEN <= '0';
			when X"1" => 
				REGaddr1 <= cmd(9 downto 8); 
				REGaddr2 <= cmd(1 downto 0); 
				ALUControl <= "001100"; -- function add and enable
				RegAOutEN <= '1'; 
				RegBOutEN <= '1'; 
				RegReadEN <= '1'; 
				ProgOUTEN <= '0'; 
				PCReadEN <= '0';
			when X"2" =>
				REGaddr1 <= cmd(9 downto 8); 
				REGaddr2 <= cmd(1 downto 0); 
				ALUControl <= "101000"; -- Load through a
				RegBOutEN <= '0'; 
				RegAOutEN <= '0'; 
				RegReadEN <= '1'; 
				PROGoutEN <= '1'; 
				PCReadEN <= '0';
			when X"3" => --jump
				REGaddr1 <= cmd(9 downto 8); 
				ALUControl <= "101000"; 
				RegBOutEN <= '0'; 
				RegAOutEN <= '0'; 
				RegReadEN <= '0'; 
				PROGoutEN <= '1'; 
				PCReadEN <= '1';
			when others =>
				RegAOutEN <= '0'; 
				RegBOutEN <= '0'; 
				RegReadEN <= '0'; 
				PROGoutEN <= '0'; 
				PCReadEN <= '0';
			end case; 
	end process; 


end Behavioral;

