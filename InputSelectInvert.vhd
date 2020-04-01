----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:25:14 03/25/2020 
-- Design Name: 
-- Module Name:    InputSelectInvert - Behavioral 
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

entity InputSelectInvert is
    Port ( INVA : in  STD_LOGIC;
           A : in  STD_LOGIC_VECTOR (15 downto 0);
           ENA : in  STD_LOGIC;
           B : in  STD_LOGIC_VECTOR (15 downto 0);
           ENB : in  STD_LOGIC;
           BOUT : out  STD_LOGIC_VECTOR (15 downto 0);
           AOUT : out  STD_LOGIC_VECTOR (15 downto 0));
end InputSelectInvert;

architecture Behavioral of InputSelectInvert is
begin
process (ENA, ENB, INVA, A, B) 
begin
	if (ENA = '1') and (INVA = '1') then
	AOUT <= not A; 
	elsif (ENA = '1') and (INVA = '0') then
	AOUT <= A; 
	elsif (ENA = '0') and (INVA = '1') then
	AOUT <= X"FFFF";
	elsif (ENA = '0') and (INVA = '0') then
	AOUT<= X"0000"; 
	else 
	AOUT <= X"0000"; 
	end if;

	if (ENB = '1') then 
	BOUT <= B; 
	else
	BOUT <= X"0000"; 
	end if; 
end process; 

end Behavioral;

