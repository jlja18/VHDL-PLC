----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:55:41 03/25/2020 
-- Design Name: 
-- Module Name:    NumericTestFile - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

entity NumericTestFile is
   port
   (
      AIN, BIN : in unsigned(3 downto 0); 

      sum       : out unsigned(3 downto 0); 
		INC : in unsigned; 
      carry_out : out std_logic
   );
end entity NumericTestFile;
 
architecture Behavioral of NumericTestFile is
   signal temp : unsigned(4 downto 0); 
begin 
   temp <= ("0" & AIN) + BIN + INC; 
   sum       <= temp(3 downto 0); 
   carry_out <= temp(4);
end architecture Behavioral;

