<?xml version="1.0" encoding="ISO-8859-1"?>
<!DOCTYPE PL>
<PL checksum="2255558532" DOC_VERSION="1" VersionId="2019.1.0 - 81842-80938 2019">
 <PARAMS_LIST>
  <PARAMETER Param_Id="9095" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="dc@emd_SCIM_TorqueControl" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIMFOC01" TITLE="line-to-neutral voltage DC component command at port 5" UNITS="V"/>
  <PARAMETER Param_Id="9062" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="thetamrest@emd_SCIM_TorqueControl" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIMFOC01" TITLE="estimated rotor flux linkage angle" UNITS="degree"/>
  <PARAMETER Param_Id="9067" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="ipartd@emd_SCIM_TorqueControl" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIMFOC01" TITLE="controller integral part for d axis" UNITS="V"/>
  <PARAMETER Param_Id="9073" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="ipartq@emd_SCIM_TorqueControl" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIMFOC01" TITLE="controller integral part for q axis" UNITS="V"/>
  <PARAMETER Param_Id="9075" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="Imrest@emd_SCIM_TorqueControl" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIMFOC01" TITLE="estimated rotor magnetizing current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9039" VALUE="100" Submodel_Instance="1" Data_Path="Irmsmax@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="maximum stator phase current RMS magnitude" UNITS="Arms"/>
  <PARAMETER TUNABLE="false" Param_Id="9040" VALUE="1" Submodel_Instance="1" Data_Path="Rs0@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="stator winding resistance at reference temperature" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9041" VALUE="0.25" Submodel_Instance="1" Data_Path="Ls@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="stator cyclic inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9042" VALUE="0.153" Submodel_Instance="1" Data_Path="taur0@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="rotor time constant at reference temperature" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9043" VALUE="0.066" Submodel_Instance="1" Data_Path="sigma@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="dispersion coefficient" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9044" VALUE="0.1" Submodel_Instance="1" Data_Path="taur2@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="time constant for rotor flux control" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9045" VALUE="1000000" Submodel_Instance="1" Data_Path="Ulimcc@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="maximum line-to-neutral voltage RMS magnitude for current control" UNITS="Vrms"/>
  <PARAMETER TUNABLE="false" Param_Id="9046" VALUE="0" Submodel_Instance="1" Data_Path="Isdinit@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="#stator current on d axis" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9047" VALUE="1e-06" Submodel_Instance="1" Data_Path="Isdmin@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="minimum rotor magnetizing current to estimate slip" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9048" VALUE="0.1" Submodel_Instance="1" Data_Path="Taud@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop time constant for d axis" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9049" VALUE="0.1" Submodel_Instance="1" Data_Path="Tauq@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop time constant for q axis" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9050" VALUE="10" Submodel_Instance="1" Data_Path="wnd@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop natural frequency for d axis" UNITS="Hz"/>
  <PARAMETER TUNABLE="false" Param_Id="9051" VALUE="0.707" Submodel_Instance="1" Data_Path="ksid@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop damping ratio for d axis" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9052" VALUE="10" Submodel_Instance="1" Data_Path="wnq@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop natural frequency for q axis" UNITS="Hz"/>
  <PARAMETER TUNABLE="false" Param_Id="9053" VALUE="0.707" Submodel_Instance="1" Data_Path="ksiq@emd_SCIM_TorqueControl" IS_DELTA="false" Submodel_Name="EMDSCIMFOC01" TITLE="close loop damping ratio for q axis" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9054" VALUE="1" Submodel_Instance="1" Data_Path="strat@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="magnetization strategy"/>
  <PARAMETER TUNABLE="false" Param_Id="9055" VALUE="2" Submodel_Instance="1" Data_Path="genonly@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="use machine as generator only"/>
  <PARAMETER TUNABLE="false" Param_Id="9056" VALUE="1" Submodel_Instance="1" Data_Path="comptauR@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="compensate rotor flux time constant"/>
  <PARAMETER TUNABLE="false" Param_Id="9057" VALUE="1" Submodel_Instance="1" Data_Path="TFtype@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="close loop transfer function type"/>
  <PARAMETER TUNABLE="false" Param_Id="9058" VALUE="1" Submodel_Instance="1" Data_Path="connectType@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="winding connection"/>
  <PARAMETER TUNABLE="false" Param_Id="9059" VALUE="1" Submodel_Instance="1" Data_Path="p@emd_SCIM_TorqueControl" Submodel_Name="EMDSCIMFOC01" TITLE="number of pole pairs"/>
  <PARAMETER Param_Id="9108" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="U@current_transducer" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBCT00" TITLE="output voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9105" VALUE="0" Submodel_Instance="1" Data_Path="offset@current_transducer" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="offset to be subtracted from current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9106" VALUE="1" Submodel_Instance="1" Data_Path="gain@current_transducer" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="gain for measured current" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9107" VALUE="1" Submodel_Instance="1" Data_Path="conv@current_transducer" Submodel_Name="EBCT00" TITLE="sign convention: positive from"/>
  <PARAMETER Param_Id="9118" VALUE="0.00000000000000e+000" Submodel_Instance="2" Data_Path="U@current_transducer_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBCT00" TITLE="output voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9115" VALUE="0" Submodel_Instance="2" Data_Path="offset@current_transducer_1" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="offset to be subtracted from current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9116" VALUE="1" Submodel_Instance="2" Data_Path="gain@current_transducer_1" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="gain for measured current" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9117" VALUE="1" Submodel_Instance="2" Data_Path="conv@current_transducer_1" Submodel_Name="EBCT00" TITLE="sign convention: positive from"/>
  <PARAMETER Param_Id="9128" VALUE="0.00000000000000e+000" Submodel_Instance="3" Data_Path="U@current_transducer_4" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBCT00" TITLE="output voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9125" VALUE="0" Submodel_Instance="3" Data_Path="offset@current_transducer_4" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="offset to be subtracted from current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9126" VALUE="1" Submodel_Instance="3" Data_Path="gain@current_transducer_4" IS_DELTA="false" Submodel_Name="EBCT00" TITLE="gain for measured current" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9127" VALUE="1" Submodel_Instance="3" Data_Path="conv@current_transducer_4" Submodel_Name="EBCT00" TITLE="sign convention: positive from"/>
  <PARAMETER TUNABLE="false" Param_Id="9145" VALUE="10000" Submodel_Instance="1" Data_Path="Fc@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="switching frequency" UNITS="Hz"/>
  <PARAMETER TUNABLE="false" Param_Id="9146" VALUE="0.9" Submodel_Instance="1" Data_Path="Vtth@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="transistor forward threshold voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9147" VALUE="0.036" Submodel_Instance="1" Data_Path="Rton@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="transistor on-state resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9148" VALUE="1" Submodel_Instance="1" Data_Path="Vdth@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="diode forward threshold voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9149" VALUE="0.08" Submodel_Instance="1" Data_Path="Rdon@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="diode forward resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9150" VALUE="0.000515" Submodel_Instance="1" Data_Path="Eswref@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="switching energy per period per phase at reference voltage and current" UNITS="J"/>
  <PARAMETER TUNABLE="false" Param_Id="9151" VALUE="400" Submodel_Instance="1" Data_Path="Uref@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="reference DC voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9152" VALUE="20" Submodel_Instance="1" Data_Path="Iref@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="reference current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9153" VALUE="0.95" Submodel_Instance="1" Data_Path="constEff@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="efficiency" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9154" VALUE="0.05" Submodel_Instance="1" Data_Path="minP@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="minimum power for efficiency calculation" UNITS="W"/>
  <PARAMETER TUNABLE="false" Param_Id="9155" VALUE="1e-06" Submodel_Instance="1" Data_Path="Umin@Average3PhaseInverter" IS_DELTA="false" Submodel_Name="ESCAVINV001" TITLE="minimum input voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9156" VALUE="1" Submodel_Instance="1" Data_Path="lossCalcMethod@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="losses definition"/>
  <PARAMETER TUNABLE="false" Param_Id="9157" VALUE="1" Submodel_Instance="1" Data_Path="modMet@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="space vector modulation"/>
  <PARAMETER TUNABLE="false" Param_Id="9158" VALUE="1" Submodel_Instance="1" Data_Path="intltype@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="interpolation type"/>
  <PARAMETER TUNABLE="false" Param_Id="9159" VALUE="1" Submodel_Instance="1" Data_Path="lmode@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="linear data out of range mode"/>
  <PARAMETER TUNABLE="false" Param_Id="9160" VALUE="1" Submodel_Instance="1" Data_Path="disc@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="modulation discontinuity handling"/>
  <PARAMETER TUNABLE="false" Param_Id="9161" VALUE="1" Submodel_Instance="1" Data_Path="discT@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="discontinuity handling"/>
  <PARAMETER TUNABLE="false" Param_Id="9162" VALUE="1" Submodel_Instance="1" Data_Path="cmode@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="cubic data out of range mode"/>
  <PARAMETER TUNABLE="false" Param_Id="9163" VALUE="$AME/libesc/data/inverterLosses.data" Submodel_Instance="1" Data_Path="userLoss@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="losses [W] datafile or expression as a function of RMS voltage [Vrms], RMS current [Arms], power factor [null], input DC voltage [V] and temperature [degC] ('Urms', 'Irms', 'pf', 'Uin' and 'Temp' in expression)"/>
  <PARAMETER TUNABLE="false" Param_Id="9164" VALUE="1/sqrt(8)" Submodel_Instance="1" Data_Path="UdcToUrms@Average3PhaseInverter" Submodel_Name="ESCAVINV001" TITLE="maximum line-to-neutral voltage RMS magnitude to DC voltage ratio"/>
  <PARAMETER Param_Id="9209" VALUE="2.00000000000000e+001" Submodel_Instance="1" Data_Path="t1@th_temperature_source_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="THTS1" TITLE="temperature at port 1" UNITS="degC"/>
  <PARAMETER TUNABLE="true" Param_Id="9235" VALUE="Udc" Submodel_Instance="1" Data_Path="k@constant_1" LINKED_VARIABLE="k0GEN@constant_1" IS_DELTA="false" Submodel_Name="CONS00" TITLE="constant value" UNITS="null"/>
  <PARAMETER Param_Id="9249" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="I1@voltmeter_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBVT01" TITLE="current at port 1" UNITS="A"/>
  <PARAMETER Param_Id="9252" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="I3@voltmeter_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBVT01" TITLE="current at port 3" UNITS="A"/>
  <PARAMETER Param_Id="9248" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="I@voltmeter_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBVT01" TITLE="output current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9244" VALUE="0" Submodel_Instance="1" Data_Path="offset@voltmeter_1" IS_DELTA="false" Submodel_Name="EBVT01" TITLE="offset to be subtracted from voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9245" VALUE="1" Submodel_Instance="1" Data_Path="gain@voltmeter_1" IS_DELTA="false" Submodel_Name="EBVT01" TITLE="gain for voltage measure" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9246" VALUE="1" Submodel_Instance="1" Data_Path="conv@voltmeter_1" Submodel_Name="EBVT01" TITLE="sign convention: positive pin"/>
  <PARAMETER TUNABLE="true" Param_Id="9254" VALUE="1/sqrt(8)" Submodel_Instance="1" Data_Path="k@elect01_1" LINKED_VARIABLE="k0GEN@elect01_1" IS_DELTA="false" Submodel_Name="GA00" TITLE="value of gain" UNITS="null"/>
  <PARAMETER Param_Id="9327" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="V1@potential_reference_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EBZV01" TITLE="zero volt voltage" UNITS="V"/>
  <PARAMETER Param_Id="9544" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="wzero@zeroomegasource_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="W000" TITLE="angular speed (always zero)" UNITS="rev/min"/>
  <PARAMETER Param_Id="9545" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="theta@zeroomegasource_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="W000" TITLE="fixed angle" UNITS="degree"/>
  <PARAMETER Param_Id="9546" VALUE="2.00000000000000e+001" Submodel_Instance="2" Data_Path="t1@th_temperature_source_4" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="THTS1" TITLE="temperature at port 1" UNITS="degC"/>
  <PARAMETER Param_Id="9614" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="thetaer@emd_InductionMachine_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIM11" TITLE="rotor electrical angle" UNITS="degree"/>
  <PARAMETER Param_Id="9616" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="Isd@emd_InductionMachine_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIM11" TITLE="stator current on d axis" UNITS="A"/>
  <PARAMETER Param_Id="9618" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="Isq@emd_InductionMachine_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIM11" TITLE="stator current on q axis" UNITS="A"/>
  <PARAMETER Param_Id="9619" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="Irdp1@emd_InductionMachine_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 current on d axis" UNITS="A"/>
  <PARAMETER Param_Id="9620" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="Irqp1@emd_InductionMachine_1" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 current on q axis" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9566" VALUE="10000" Submodel_Instance="1" Data_Path="Sb@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="base apparent power" UNITS="VA"/>
  <PARAMETER TUNABLE="false" Param_Id="9567" VALUE="220" Submodel_Instance="1" Data_Path="Vb@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="base line-to-line voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="9568" VALUE="50" Submodel_Instance="1" Data_Path="fb@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="base frequency" UNITS="Hz"/>
  <PARAMETER TUNABLE="false" Param_Id="9569" VALUE="25" Submodel_Instance="1" Data_Path="T0@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="reference temperature" UNITS="degC"/>
  <PARAMETER TUNABLE="false" Param_Id="9570" VALUE="Rs1" Submodel_Instance="1" Data_Path="Rs0@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="stator winding resistance at reference temperature" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9571" VALUE="0.21" Submodel_Instance="1" Data_Path="Rs0pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="stator winding resistance at reference temperature (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9572" VALUE="0" Submodel_Instance="1" Data_Path="alphaRs@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="corrective coefficient on stator winding resistance" UNITS="1/K"/>
  <PARAMETER TUNABLE="false" Param_Id="9573" VALUE="Lm" Submodel_Instance="1" Data_Path="Lm0@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="unsaturated magnetizing inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9574" VALUE="16" Submodel_Instance="1" Data_Path="Xm0pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="unsaturated magnetizing reactance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9575" VALUE="ls1" Submodel_Instance="1" Data_Path="ls@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="stator leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9576" VALUE="0.065" Submodel_Instance="1" Data_Path="Xspu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="stator leakage reactance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9577" VALUE="1000000" Submodel_Instance="1" Data_Path="RFe@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="iron losses resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9578" VALUE="200000" Submodel_Instance="1" Data_Path="RFepu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="iron losses resistance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9579" VALUE="Rrp" Submodel_Instance="1" Data_Path="Rrp01@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 resistance at reference temperature" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9580" VALUE="0.021" Submodel_Instance="1" Data_Path="Rrp01pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 resistance at reference temperature (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9581" VALUE="1" Submodel_Instance="1" Data_Path="Rrp02@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 2 resistance at reference temperature" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9582" VALUE="0.21" Submodel_Instance="1" Data_Path="Rrp02pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 2 resistance at reference temperature (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9583" VALUE="10" Submodel_Instance="1" Data_Path="Rrp03@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 3 resistance at reference temperature" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="9584" VALUE="2.1" Submodel_Instance="1" Data_Path="Rrp03pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 3 resistance at reference temperature (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9585" VALUE="0" Submodel_Instance="1" Data_Path="alphaRr@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="corrective coefficient on rotor cage resistance" UNITS="1/K"/>
  <PARAMETER TUNABLE="false" Param_Id="9586" VALUE="lrp" Submodel_Instance="1" Data_Path="lrp1@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9587" VALUE="0.065" Submodel_Instance="1" Data_Path="Xrp1pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 1 leakage reactance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9588" VALUE="0.0001" Submodel_Instance="1" Data_Path="lrp2@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 2 leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9589" VALUE="0.0065" Submodel_Instance="1" Data_Path="Xrp2pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 2 leakage reactance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9590" VALUE="1e-05" Submodel_Instance="1" Data_Path="lrp3@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 3 leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="9591" VALUE="0.00065" Submodel_Instance="1" Data_Path="Xrp3pu@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="rotor cage 3 leakage reactance (pu)" UNITS="perunit"/>
  <PARAMETER TUNABLE="false" Param_Id="9592" VALUE="1e-09" Submodel_Instance="1" Data_Path="ImMin@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="minimum rotor magnetizing current for magnetizing inductance derivative computation" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="9593" VALUE="1e-09" Submodel_Instance="1" Data_Path="LmFraction@emd_InductionMachine_1" IS_DELTA="false" Submodel_Name="EMDSCIM11" TITLE="minimum permitted fraction of magnetizing inductance" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9594" VALUE="2" Submodel_Instance="1" Data_Path="defMode@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="parameter definition mode"/>
  <PARAMETER TUNABLE="false" Param_Id="9595" VALUE="1" Submodel_Instance="1" Data_Path="branchNumber@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="number of branches"/>
  <PARAMETER TUNABLE="false" Param_Id="9596" VALUE="1" Submodel_Instance="1" Data_Path="satModel@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="saturation model"/>
  <PARAMETER TUNABLE="false" Param_Id="9597" VALUE="2" Submodel_Instance="1" Data_Path="FeLosses@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="iron losses model"/>
  <PARAMETER TUNABLE="false" Param_Id="9598" VALUE="2" Submodel_Instance="1" Data_Path="connectType@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="winding connection"/>
  <PARAMETER TUNABLE="false" Param_Id="9599" VALUE="p1" Submodel_Instance="1" Data_Path="p@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="number of pole pairs"/>
  <PARAMETER TUNABLE="false" Param_Id="9600" VALUE="2" Submodel_Instance="1" Data_Path="intltype@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="interpolation type"/>
  <PARAMETER TUNABLE="false" Param_Id="9601" VALUE="1" Submodel_Instance="1" Data_Path="lmode@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="linear data out of range mode"/>
  <PARAMETER TUNABLE="false" Param_Id="9602" VALUE="2" Submodel_Instance="1" Data_Path="disc@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="discontinuity handling"/>
  <PARAMETER TUNABLE="false" Param_Id="9603" VALUE="1" Submodel_Instance="1" Data_Path="cmode@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="cubic data out of range mode"/>
  <PARAMETER TUNABLE="false" Param_Id="9604" VALUE="1" Submodel_Instance="1" Data_Path="Ksfile@emd_InductionMachine_1" Submodel_Name="EMDSCIM11" TITLE="saturation coefficient [null] datafile or expression as a function of magnetizing current [A] (Im)"/>
  <PARAMETER TUNABLE="false" Param_Id="9781" VALUE="10" Submodel_Instance="1" Data_Path="alpha@reducer" IS_DELTA="false" Submodel_Name="RN001" TITLE="gear ratio" UNITS="null"/>
  <PARAMETER Param_Id="9801" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="w@rotaryload2ports" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="MECRL0" TITLE="shaft speed at port 2" UNITS="rev/min"/>
  <PARAMETER TUNABLE="false" Param_Id="9786" VALUE="0.001" Submodel_Instance="1" Data_Path="J@rotaryload2ports" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="moment of inertia" UNITS="kgm**2"/>
  <PARAMETER TUNABLE="false" Param_Id="9787" VALUE="0.03" Submodel_Instance="1" Data_Path="vis@rotaryload2ports" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="coefficient of viscous friction" UNITS="Nm/(rev/min)"/>
  <PARAMETER TUNABLE="false" Param_Id="9788" VALUE="0" Submodel_Instance="1" Data_Path="coul@rotaryload2ports" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="Coulomb friction torque" UNITS="Nm"/>
  <PARAMETER TUNABLE="false" Param_Id="9789" VALUE="0" Submodel_Instance="1" Data_Path="stict@rotaryload2ports" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="stiction torque" UNITS="Nm"/>
  <PARAMETER TUNABLE="false" Param_Id="9790" VALUE="1" Submodel_Instance="1" Data_Path="friction@rotaryload2ports" Submodel_Name="MECRL0" TITLE="use friction"/>
  <PARAMETER Param_Id="9820" VALUE="0.00000000000000e+000" Submodel_Instance="2" Data_Path="w@rotaryload2ports_2" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="MECRL0" TITLE="shaft speed at port 2" UNITS="rev/min"/>
  <PARAMETER TUNABLE="false" Param_Id="9805" VALUE="0.04" Submodel_Instance="2" Data_Path="J@rotaryload2ports_2" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="moment of inertia" UNITS="kgm**2"/>
  <PARAMETER TUNABLE="false" Param_Id="9806" VALUE="0.03" Submodel_Instance="2" Data_Path="vis@rotaryload2ports_2" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="coefficient of viscous friction" UNITS="Nm/(rev/min)"/>
  <PARAMETER TUNABLE="false" Param_Id="9807" VALUE="0" Submodel_Instance="2" Data_Path="coul@rotaryload2ports_2" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="Coulomb friction torque" UNITS="Nm"/>
  <PARAMETER TUNABLE="false" Param_Id="9808" VALUE="0" Submodel_Instance="2" Data_Path="stict@rotaryload2ports_2" IS_DELTA="false" Submodel_Name="MECRL0" TITLE="stiction torque" UNITS="Nm"/>
  <PARAMETER TUNABLE="false" Param_Id="9809" VALUE="2" Submodel_Instance="2" Data_Path="friction@rotaryload2ports_2" Submodel_Name="MECRL0" TITLE="use friction"/>
  <PARAMETER Param_Id="9826" VALUE="0.00000000000000e+000" Submodel_Instance="1" Data_Path="are@rotaryspringdamper" IS_DELTA="false" IS_LINKED_VARIABLE="false" Submodel_Name="RSD00" TITLE="relative angular displacement" UNITS="degree"/>
  <PARAMETER TUNABLE="false" Param_Id="9824" VALUE="10" Submodel_Instance="1" Data_Path="ktor@rotaryspringdamper" IS_DELTA="false" Submodel_Name="RSD00" TITLE="stiffness" UNITS="Nm/degree"/>
  <PARAMETER TUNABLE="false" Param_Id="9825" VALUE="0.001" Submodel_Instance="1" Data_Path="rtor@rotaryspringdamper" IS_DELTA="false" Submodel_Name="RSD00" TITLE="damper rating" UNITS="Nm/(rev/min)"/>
  <PARAMETER TUNABLE="false" Param_Id="9842" VALUE="0" Submodel_Instance="1" Data_Path="offset@closedLoopSpeed" IS_DELTA="false" Submodel_Name="MECRSS0B" TITLE="offset to be subtracted from angular velocity" UNITS="rev/min"/>
  <PARAMETER TUNABLE="false" Param_Id="9843" VALUE="1" Submodel_Instance="1" Data_Path="gain@closedLoopSpeed" IS_DELTA="false" Submodel_Name="MECRSS0B" TITLE="gain for signal output" UNITS="min/rev"/>
  <PARAMETER TUNABLE="false" Param_Id="9844" VALUE="1" Submodel_Instance="1" Data_Path="conv@closedLoopSpeed" Submodel_Name="MECRSS0B" TITLE="sign convention: positive from"/>
  <PARAMETER TUNABLE="false" Param_Id="9850" VALUE="0" Submodel_Instance="1" Data_Path="tstart@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="time at which duty cycle starts" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9851" VALUE="0" Submodel_Instance="1" Data_Path="start1@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 1" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9852" VALUE="0" Submodel_Instance="1" Data_Path="end1@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 1" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9853" VALUE="0.45" Submodel_Instance="1" Data_Path="t1@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 1" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9854" VALUE="4" Submodel_Instance="1" Data_Path="start2@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 2" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9855" VALUE="4" Submodel_Instance="1" Data_Path="end2@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 2" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9856" VALUE="0.01" Submodel_Instance="1" Data_Path="t2@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 2" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9857" VALUE="0" Submodel_Instance="1" Data_Path="start3@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 3" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9858" VALUE="0" Submodel_Instance="1" Data_Path="end3@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 3" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9859" VALUE="0.7-0.45" Submodel_Instance="1" Data_Path="t3@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 3" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9860" VALUE="4" Submodel_Instance="1" Data_Path="start4@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 4" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9861" VALUE="4" Submodel_Instance="1" Data_Path="end4@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 4" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9862" VALUE="0.01" Submodel_Instance="1" Data_Path="t4@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 4" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9863" VALUE="0" Submodel_Instance="1" Data_Path="start5@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 5" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9864" VALUE="0" Submodel_Instance="1" Data_Path="end5@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 5" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9865" VALUE="3" Submodel_Instance="1" Data_Path="t5@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 5" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9866" VALUE="0" Submodel_Instance="1" Data_Path="start6@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 6" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9867" VALUE="0" Submodel_Instance="1" Data_Path="end6@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 6" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9868" VALUE="3" Submodel_Instance="1" Data_Path="t6@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 6" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9869" VALUE="0" Submodel_Instance="1" Data_Path="start7@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 7" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9870" VALUE="0" Submodel_Instance="1" Data_Path="end7@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 7" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9871" VALUE="3" Submodel_Instance="1" Data_Path="t7@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 7" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9872" VALUE="0" Submodel_Instance="1" Data_Path="start8@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 8" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9873" VALUE="0" Submodel_Instance="1" Data_Path="end8@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 8" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9874" VALUE="3" Submodel_Instance="1" Data_Path="t8@piecewiselinear_1" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 8" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9875" VALUE="4" Submodel_Instance="1" Data_Path="nstages@piecewiselinear_1" Submodel_Name="UD00" TITLE="number of stages"/>
  <PARAMETER TUNABLE="false" Param_Id="9876" VALUE="2" Submodel_Instance="1" Data_Path="iscyclic@piecewiselinear_1" Submodel_Name="UD00" TITLE="cyclic"/>
  <PARAMETER TUNABLE="false" Param_Id="9887" VALUE="-0.198" Submodel_Instance="2" Data_Path="tstart@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="time at which duty cycle starts" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9888" VALUE="-0.7" Submodel_Instance="2" Data_Path="start1@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 1" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9889" VALUE="120" Submodel_Instance="2" Data_Path="end1@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 1" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9890" VALUE="0.498" Submodel_Instance="2" Data_Path="t1@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 1" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9891" VALUE="125" Submodel_Instance="2" Data_Path="start2@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 2" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9892" VALUE="125" Submodel_Instance="2" Data_Path="end2@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 2" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9893" VALUE="0.2" Submodel_Instance="2" Data_Path="t2@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 2" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9894" VALUE="125" Submodel_Instance="2" Data_Path="start3@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 3" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9895" VALUE="0" Submodel_Instance="2" Data_Path="end3@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 3" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9896" VALUE="0.06" Submodel_Instance="2" Data_Path="t3@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 3" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9897" VALUE="0" Submodel_Instance="2" Data_Path="start4@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 4" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9898" VALUE="-125" Submodel_Instance="2" Data_Path="end4@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 4" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9899" VALUE="0.06" Submodel_Instance="2" Data_Path="t4@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 4" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9900" VALUE="-125" Submodel_Instance="2" Data_Path="start5@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 5" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9901" VALUE="-125" Submodel_Instance="2" Data_Path="end5@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 5" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9902" VALUE="0.2" Submodel_Instance="2" Data_Path="t5@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 5" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9903" VALUE="-125" Submodel_Instance="2" Data_Path="start6@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 6" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9904" VALUE="0" Submodel_Instance="2" Data_Path="end6@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 6" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9905" VALUE="0.06" Submodel_Instance="2" Data_Path="t6@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 6" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9906" VALUE="0" Submodel_Instance="2" Data_Path="start7@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 7" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9907" VALUE="0" Submodel_Instance="2" Data_Path="end7@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 7" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9908" VALUE="3" Submodel_Instance="2" Data_Path="t7@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 7" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9909" VALUE="0" Submodel_Instance="2" Data_Path="start8@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at start of stage 8" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9910" VALUE="0" Submodel_Instance="2" Data_Path="end8@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="output at end of stage 8" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="9911" VALUE="3" Submodel_Instance="2" Data_Path="t8@piecewiselinear_2" IS_DELTA="false" Submodel_Name="UD00" TITLE="duration of stage 8" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="9912" VALUE="1" Submodel_Instance="2" Data_Path="nstages@piecewiselinear_2" Submodel_Name="UD00" TITLE="number of stages"/>
  <PARAMETER TUNABLE="false" Param_Id="9913" VALUE="2" Submodel_Instance="2" Data_Path="iscyclic@piecewiselinear_2" Submodel_Name="UD00" TITLE="cyclic"/>
 </PARAMS_LIST>
 <EXPOSED_COPY_LIST/>
 <GLOBAL_PARAMS_LIST>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="2" Data_Path="p" TITLE="pole pairs"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.0002" Data_Path="mFvisc" IS_DELTA="false" TITLE="viscous friction on motor shaft" UNITS="Nm/(rad/s)"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.07" Data_Path="Phif" IS_DELTA="false" TITLE="machine permanent magnet flux linkage" UNITS="Wb"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="1e-06" Data_Path="Rs" IS_DELTA="false" TITLE="machine stator resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.00175" Data_Path="Ls" IS_DELTA="false" TITLE="machine stator cyclic inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Ls*0.9" Data_Path="Lsd" IS_DELTA="false" TITLE="machine stator cyclic inductance d" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Ls*1.1" Data_Path="Lsq" IS_DELTA="false" TITLE="machine stator cyclic inductance q" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.01" Data_Path="Taud" IS_DELTA="false" TITLE="d axis PI time constant" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.01" Data_Path="Tauq" IS_DELTA="false" TITLE="q axis PI time constant" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="50" Data_Path="Imax" IS_DELTA="false" TITLE="Maximum rms current" UNITS="A"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="31000" Data_Path="w" IS_DELTA="false" TITLE="angular velocity" UNITS="rev/min"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="2" Data_Path="connectType" TITLE="winding connection"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="230.94*(sqrt(3)*(connectType==1)+(connectType==2))" Data_Path="Udc" IS_DELTA="false" TITLE="DC load voltage" UNITS="V"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.066" Data_Path="sigma0" IS_DELTA="false" TITLE="dispersion coefficient" UNITS="null"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="1" Data_Path="Rs0" IS_DELTA="false" TITLE="stator resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Rs0" Data_Path="Rs1" IS_DELTA="false" TITLE="stator resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="1" Data_Path="p1" TITLE="pole pair number"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.25" Data_Path="Ls0" IS_DELTA="false" TITLE="stator cyclic inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="sqrt(1-sigma0)*Ls0" Data_Path="Lm" IS_DELTA="false" TITLE="unsaturated magnetizing inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Ls0-Lm" Data_Path="lrp" IS_DELTA="false" TITLE="rotor leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="0.153" Data_Path="Tr0" IS_DELTA="false" TITLE="rotor time constant" UNITS="s"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Ls0/Tr0" Data_Path="Rrp" IS_DELTA="false" TITLE="rotor cage resistance" UNITS="Ohm"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="Ls0-Lm" Data_Path="ls1" IS_DELTA="false" TITLE="stator leakage inductance" UNITS="H"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="125" Data_Path="target_rpm" IS_DELTA="false" TITLE="speed" UNITS="rpm"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="125/0.06" Data_Path="target_acc" IS_DELTA="false" TITLE="acceleration" UNITS="rpm/s"/>
  <PARAMETER TUNABLE="false" Param_Id="0" VALUE="125" Data_Path="target_rpm1" IS_DELTA="false" TITLE="speed" UNITS="rpm"/>
 </GLOBAL_PARAMS_LIST>
 <GLOBAL_LOCAL_PARAMS_LIST/>
</PL>
