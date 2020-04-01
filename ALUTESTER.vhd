--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:07:52 03/25/2020
-- Design Name:   
-- Module Name:   C:/Users/Jonas/Aalborg Universitet/Jan Peter Mortensen Christiansen - P4/Arbejdsblade/Sjov med VHDL/PLCtest/PLC/ALUTESTER.vhd
-- Project Name:  PLC
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
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
 
ENTITY ALUTESTER IS
END ALUTESTER;
 
ARCHITECTURE behavior OF ALUTESTER IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         Fselect : IN  std_logic_vector(1 downto 0);
         INVA : IN  std_logic;
         ENA : IN  std_logic;
         ENB : IN  std_logic;
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         C : OUT  std_logic_vector(3 downto 0);
         INC : IN  std_logic;
         CarryOUT : OUT  std_logic;
         CarryIN : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Fselect : std_logic_vector(1 downto 0) := (others => '0');
   signal INVA : std_logic := '0';
   signal ENA : std_logic := '0';
   signal ENB : std_logic := '0';
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal INC : std_logic := '0';
   signal CarryIN : std_logic := '0';

 	--Outputs
   signal C : std_logic_vector(3 downto 0);
   signal CarryOUT : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          Fselect => Fselect,
          INVA => INVA,
          ENA => ENA,
          ENB => ENB,
          A => A,
          B => B,
          C => C,
          INC => INC,
          CarryOUT => CarryOUT,
          CarryIN => CarryIN
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		ENA <= '1'; 
		ENB <= '1'; 
		INVA <= '1'; 
		INC <= '1'; 
		A <= "1001"; 
		B <= "0111"; 
		wait for 100 ns; 
		
		A <= "0000"; 
		
      wait;
   end process;
	
	

END;
