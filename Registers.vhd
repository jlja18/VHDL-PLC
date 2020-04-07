----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:37:22 03/26/2020 
-- Design Name: 
-- Module Name:    Registers - Behavioral 
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

entity Registers is
    Port ( clk : in STD_LOGIC; 
			  addr1 : in  STD_LOGIC_VECTOR (1 downto 0);
			  addr2 : in  STD_LOGIC_VECTOR (1 downto 0);
           datain : in  STD_LOGIC_VECTOR (15 downto 0);
           dataout1 : out  STD_LOGIC_VECTOR (15 downto 0);
			  dataout2 : out STD_LOGIC_VECTOR (15 downto 0);
			  out1enable : in STD_LOGIC; 
			  out2enable : in STD_LOGIC; 
           WE1 : in  STD_LOGIC;
			  WE2 : in STD_LOGIC);
end Registers;

architecture Behavioral of Registers is
type REGS is array (0 to 3) of STD_LOGIC_VECTOR (15 downto 0);  
signal REG : REGS :=(X"0000", X"0000", X"0000", X"0000"); 
begin
process(we1, we2, datain, addr1, addr2, REG, clk, out1Enable, out2Enable)
begin
	if (clk'event and clk = '0') then
		if WE1 = '1' then 
			REG(conv_integer(addr1)) <= datain;
		end if;
		
		if WE2 = '1' then 
			REG(conv_integer(addr2)) <= datain;
		end if;
	end if; 


	if out1Enable = '1' then  
		dataout1 <= REG(conv_integer(addr1)); 
	else
		dataout1 <= "ZZZZZZZZZZZZZZZZ"; 
	end if; 
	
	if out2Enable = '1' then
		dataout2 <= REG(conv_integer(addr2));
	else 
		dataout2 <= "ZZZZZZZZZZZZZZZZ"; 
	end if;
	
end process; 
end Behavioral;

