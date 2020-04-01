----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:00:31 03/26/2020 
-- Design Name: 
-- Module Name:    ProgramStore - Behavioral 
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

entity ProgramStore is
    Port ( INST : out  STD_LOGIC_VECTOR (23 downto 0);
           ADDR : in  STD_LOGIC_VECTOR (0 downto 0);
           ReadEnable : in  STD_LOGIC);
end ProgramStore;

architecture Behavioral of ProgramStore is

begin


end Behavioral;

