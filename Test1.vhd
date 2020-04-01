--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:31:36 03/24/2020
-- Design Name:   
-- Module Name:   C:/Users/Jonas/Aalborg Universitet/Jan Peter Mortensen Christiansen - P4/Arbejdsblade/Sjov med VHDL/PLCtest/PLC/Test1.vhd
-- Project Name:  PLC
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CPU_v0
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test1 IS
END Test1;
 
ARCHITECTURE behavior OF Test1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CPU_v0
    PORT(
         CLK : IN  std_logic;
         SW : IN  std_logic_vector(7 downto 0);
         LED : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal SW : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal LED : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CPU_v0 PORT MAP (
          CLK => CLK,
          SW => SW,
          LED => LED
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
