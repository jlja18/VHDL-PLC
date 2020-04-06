
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name PLC -dir "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/planAhead_run_1" -part xc6slx9tqg144-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Jonas/Desktop/PLC/VHDL-PLC/CPU.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Jonas/Desktop/PLC/VHDL-PLC} }
set_property target_constrs_file "BPC3011-Papilio_Pro-general.ucf" [current_fileset -constrset]
add_files [list {BPC3011-Papilio_Pro-general.ucf}] -fileset [get_property constrset [current_run]]
link_design
