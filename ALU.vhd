----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:26:00 03/25/2020 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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

entity ALU is
    Port ( Fselect : in  STD_LOGIC_VECTOR (1 downto 0);
           INVA : in  STD_LOGIC;
			  ENA : in STD_LOGIC;
			  ENB : in STD_LOGIC; 
           A : in  STD_LOGIC_VECTOR (15 downto 0);
           B : in  STD_LOGIC_VECTOR (15 downto 0);
           C : out  STD_LOGIC_VECTOR (15 downto 0);
			  INC : in STD_LOGIC; 
           CarryOUT : out  STD_LOGIC;
           CarryIN : in  STD_LOGIC);
end ALU;

architecture Behavioral of ALU is
	component InputSelectInvert is
		 Port ( INVA : in  STD_LOGIC;
				  A : in  STD_LOGIC_VECTOR (15 downto 0);
				  ENA : in  STD_LOGIC;
				  B : in  STD_LOGIC_VECTOR (15 downto 0);
				  ENB : in  STD_LOGIC;
				  BOUT : out  STD_LOGIC_VECTOR (15 downto 0);
				  AOUT : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	component AluFunctionBlock is
    Port ( AIN : in  STD_LOGIC_VECTOR (15 downto 0);
           BIN : in  STD_LOGIC_VECTOR (15 downto 0);
			  INC : in STD_LOGIC;
			  CarryOut : out STD_LOGIC; 
           RESULT : out  STD_LOGIC_VECTOR (15 downto 0);
			  Fselect : in STD_LOGIC_VECTOR (1 downto 0)
			  );
	end component;

	signal AOUT, BOUT : STD_LOGIC_VECTOR (15 downto 0);  
	
	
begin


	Selecter1 : InputSelectInvert port map(
		A => A, 
		B => B, 
		INVA => INVA,
		ENA => ENA,
		ENB => ENB, 
		AOUT => AOUT,
		BOUT => BOUT); 
		
	Func1 : AluFunctionBlock port map (
		AIN =>  AOUT,
		BIN => BOUT,
		INC => INC,
		CarryOUT => CarryOUT, 
		RESULT => C,
		Fselect => Fselect); 
							
end Behavioral;

