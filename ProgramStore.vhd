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
use IEEE.STD_LOGIC_UNSIGNED.ALL; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ProgramStore is
    Port ( INST : out  STD_LOGIC_VECTOR (15 downto 0);
			  arg1 : out STD_LOGIC_VECTOR (15 downto 0); 
			  arg2 : out STD_LOGIC_VECTOR (15 downto 0); 
			  arg3 : out STD_LOGIC_VECTOR (15 downto 0); 
           ADDR : in  STD_LOGIC_VECTOR (5 downto 0);
           WE : in  STD_LOGIC);
end ProgramStore;

architecture Behavioral of ProgramStore is
		type ram_type is array (0 to 63) of STD_LOGIC_VECTOR (15 downto 0);
		signal PROG : ram_type := (X"0002", X"0008", X"0000", X"0002", X"0005", X"0001", X"0001", X"0000", X"0001", X"0003", X"0006",others => X"0000");
begin
	process(ADDR, WE)
	begin 
		if WE = '1' then
		INST <= PROG(conv_integer(ADDR)); 
		arg1 <= PROG(conv_integer(ADDR + 1)); 
		arg2 <= PROG(conv_integer(ADDR + 2)); 
		arg3 <= PROG(conv_integer(ADDR + 3)); 
		else 
		INST <= (others => 'Z'); 
		ARG1 <= (others => 'Z'); 
		ARG2 <= (others => 'Z'); 
		ARG3 <= (others => 'Z'); 
		end if; 
	end process; 
	
end Behavioral;

