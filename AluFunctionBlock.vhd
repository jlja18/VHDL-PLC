----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:53:17 03/25/2020 
-- Design Name: 
-- Module Name:    AluFunctionBlock - Behavioral 
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
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity AluFunctionBlock is
    Port ( AIN : in  STD_LOGIC_VECTOR(15 downto 0);
           BIN : in  STD_LOGIC_VECTOR(15 downto 0);
			  INC : in STD_LOGIC;
			  CarryOut : out STD_LOGIC; 
           RESULT : out  STD_LOGIC_VECTOR (15 downto 0);
			  Fselect : in STD_LOGIC_VECTOR (1 downto 0)
			  );
end AluFunctionBlock;

architecture Behavioral of AluFunctionBlock is
signal tmp : STD_LOGIC_VECTOR (16 downto 0); 
signal Atmp: STD_LOGIC_VECTOR (16 downto 0); 
begin
	Atmp(15 downto 0) <= AIN; 
	Atmp(16) <= '0'; 
	tmp <= Atmp + BIN + INC; 
	CarryOut <= tmp(16); 
	
with Fselect select 
		RESULT <= tmp(15 downto 0) when "11", 
		AIN and BIN when "00",
		AIN or BIN when "01",
		not BIN when "10",
		X"0000" when others; 
end Behavioral;

