# ESD-Extract
At present there is no sure way of determining the ESD tolerance of a chip. Some guess work is used and overkill. Existing tools do provide assistance in applying good practice methods for ESD tolerance but still weaknesses can get by them. 
Spice simulation can be applied for more accurate determination of ESD tolerance and the location of weak areas of a circuit but historically this has not been done due to the following reasons:

#####1. Net list extraction problem. The simulation of the ESD discharge path along with protected devices should result in a very manageable simulation file. General net list extraction tools create unwieldy simulation files with unnecessary circuits being included. Furthermore, there no provisions to determine what voltages cause device failure.
#####2. High current ESD clamp models. To date certain high current clamp models provided by the foundry have been inaccurate. 
#####3. Source Model. Foundry now has adequate HBM and CDM Spice source models that can accurately predict amplitude and waveform shape for a given package.
#####4. Protected device conduction and failure models. These models aren’t provided by the foundries. Simple wrapper models with gate dielectric TDDB and drain breakdown models were used to accurately predict inverter failure and the VFTLP I-V curve for 28nm HPm inverter chain thus demonstrating the viability of these types of models. 
To date the ESD simulations described above have successfully applied to LNAs which are simpler than digital circuits to simulate.

The CDM voltage tolerance limit for advanced chips will be limited by SERDES circuits which use LV devices to interface to the outside world and have input capacitance limits. Thus, the first priority will be to focus on characterizing these types of circuits.
