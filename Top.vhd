----------------------------------------------------------------------------------
-- Company:
-- Engineer:
-- 
-- Create Date:    13:52:52 03/23/2020
-- Design Name:
-- Module Name:    CPU_v0 - Behavioral
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
 
entity CPU_v0 is
    Port ( CLK : in  STD_LOGIC;
              SW  : in  STD_LOGIC_VECTOR (7 downto 0);
              LED : out STD_LOGIC_VECTOR (7 downto 0));
end CPU_v0;
 
architecture Behavioral of CPU_v0 is
    type ram_type is array (0 to 63) of STD_LOGIC_VECTOR (7 downto 0);
    signal PROG : ram_type:= (X"02", X"01", X"01", X"02", X"01", X"05", X"02", X"01",
                                      X"06", X"08", X"01", X"08", X"09", X"00", X"00", X"02",
                                      X"FF", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
                                      X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
                                      X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
                                      X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
                                      X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00",
                                      X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00");
   signal PC:  STD_LOGIC_VECTOR (5 downto 0) := "000000"; 
	type registers is array (0 to 7) of STD_LOGIC_VECTOR (7 downto 0); 
	signal REG : registers := (X"00", X"00", X"00", X"00", X"00", X"00", X"00", X"00"); 
	 -- The PC needs 2^6 = 64 values for PROG.
    --signal cmd: STD_LOGIC_VECTOR (7 downto 0) := X"00"; 
 
begin
    process(CLK) 
	 variable cmd : STD_LOGIC_VECTOR (7 downto 0) := X"00"; 
	 begin
        if (clk'event and clk = '1') then	
		  		cmd := PROG(conv_integer(PC));
				case(cmd) is
            when X"00" => -- [NOP] No operation
                PC <= PC + 1;
            when X"01" => -- [HI] Set pin high  
               LED(conv_integer(PROG(conv_integer(PC) + 1))) <= '1';
					PC <= PC + 2;
				when X"02" => -- connect
					LED(conv_integer(PROG(conv_integer(PC) + 2))) <= SW(conv_integer(PROG(conv_integer(PC) + 1)));
					PC <= PC + 3; 
				when X"03" => -- goto next argument
					PC <= PROG(conv_integer(PC) +1)(5 downto 0); 
				when X"04" => -- load to accumulator
					REG(0) <= REG(conv_integer(pc(2 downto 0)) + 1); 
					PC <= PC + 2; 
				when X"05" => -- add to accumulator
					REG(0) <= REG(0) + REG(conv_integer(pc(2 downto 0)) + 1);
					PC <= PC + 2;
            when X"07" => -- read from accumulator
					REG(conv_integer(pc(2 downto 0)) + 1) <= REG(0);
					PC <= PC + 2;
				when X"08" => -- load value to register
					REG(conv_integer(pc(2 downto 0)) + 1) <= PROG(conv_integer(PC) +2); 
					PC <= PC + 3; 
				when X"09" => --conditional jump; 
					case (PROG(conv_integer(PC) +1)) is 
					when X"00" =>
						if (REG(conv_integer(PROG(conv_integer(PC) +2))) = REG(conv_integer(PROG(conv_integer(PC) +3)))) then 
							PC <= PROG(conv_integer(PC) +4)(5 downto 0); 
						else
							PC <= PC +5; 
						end if; 
					when others =>
						PC <= PC +1; 
					end case; 
				when others =>
               PC <= PC + 1;
            end case;

        end if;
    end process;
end Behavioral;

