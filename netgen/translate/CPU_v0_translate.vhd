--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: CPU_v0_translate.vhd
-- /___/   /\     Timestamp: Tue Apr 07 15:58:38 2020
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -rpw 100 -tpw 0 -ar Structure -tm CPU_v0 -w -dir netgen/translate -ofmt vhdl -sim CPU.ngd CPU_v0_translate.vhd 
-- Device	: 6slx9tqg144-2
-- Input file	: CPU.ngd
-- Output file	: C:\Users\Jonas\Desktop\PLC\VHDL-PLC\netgen\translate\CPU_v0_translate.vhd
-- # of Entities	: 1
-- Design Name	: CPU
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library SIMPRIM;
use SIMPRIM.VCOMPONENTS.ALL;
use SIMPRIM.VPACKAGE.ALL;

entity CPU_v0 is
  port (
    CLK : in STD_LOGIC := 'X'; 
    ting : out STD_LOGIC 
  );
end CPU_v0;

architecture Structure of CPU_v0 is
  signal ting_OBUF_0 : STD_LOGIC; 
  signal CLK_IBUF_3 : STD_LOGIC; 
begin
  XST_GND : X_ZERO
    port map (
      O => ting_OBUF_0
    );
  CLK_IBUF : X_BUF
    port map (
      I => CLK,
      O => CLK_IBUF_3
    );
  ting_OBUF : X_OBUF
    port map (
      I => ting_OBUF_0,
      O => ting
    );
  NlwBlockROC : X_ROC
    generic map (ROC_WIDTH => 100 ns)
    port map (O => GSR);
  NlwBlockTOC : X_TOC
    port map (O => GTS);

end Structure;

