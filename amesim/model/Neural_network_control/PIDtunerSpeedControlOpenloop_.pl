<?xml version="1.0" encoding="ISO-8859-1"?>
<!DOCTYPE PL>
<PL checksum="2555849494" VersionId="2019.1.0 - 81842-80938 2019" DOC_VERSION="1">
 <PARAMS_LIST>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="15" Submodel_Name="W000" Data_Path="wzero@zeroomegasource" Submodel_Instance="1" TITLE="angular speed (always zero)" UNITS="rev/min" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="16" Submodel_Name="W000" Data_Path="theta@zeroomegasource" Submodel_Instance="1" TITLE="fixed angle" UNITS="degree" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="2.50000000000000e+001" Param_Id="17" Submodel_Name="THTS1" Data_Path="t1@th_temperature_source" Submodel_Instance="1" TITLE="temperature at port 1" UNITS="degC" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="18" Submodel_Name="EBZV01" Data_Path="V1@potential_reference" Submodel_Instance="1" TITLE="zero volt voltage" UNITS="V" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="26" Submodel_Name="EMDPMDC01" Data_Path="Ia@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="armature winding input current" UNITS="A" IS_DELTA="false"/>
  <PARAMETER VALUE="25" Param_Id="19" Submodel_Name="EMDPMDC01" Data_Path="T0@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="reference temperature" TUNABLE="false" UNITS="degC" IS_DELTA="false"/>
  <PARAMETER VALUE="0.2" Param_Id="20" Submodel_Name="EMDPMDC01" Data_Path="Ra0@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="armature winding resistance at reference temperature" TUNABLE="false" UNITS="Ohm" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="21" Submodel_Name="EMDPMDC01" Data_Path="alphaRa@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="corrective coefficient on armature winding resistance" TUNABLE="false" UNITS="1/K" IS_DELTA="false"/>
  <PARAMETER VALUE="0.00086" Param_Id="22" Submodel_Name="EMDPMDC01" Data_Path="La@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="armature winding inductance" TUNABLE="false" UNITS="H" IS_DELTA="false"/>
  <PARAMETER VALUE="0.13" Param_Id="23" Submodel_Name="EMDPMDC01" Data_Path="Kt0@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="electromotive force and torque constant at reference temperature" TUNABLE="false" UNITS="V*s/rad" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="24" Submodel_Name="EMDPMDC01" Data_Path="alphaKt@emd_DirectCurrentMachine" Submodel_Instance="1" TITLE="corrective coefficient on electromotive force and torque constant" TUNABLE="false" UNITS="1/K" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="57" Submodel_Name="EBZV01" Data_Path="V1@potential_reference_1" Submodel_Instance="2" TITLE="zero volt voltage" UNITS="V" IS_DELTA="false"/>
  <PARAMETER VALUE="10" Param_Id="58" Submodel_Name="RN001" Data_Path="alpha@reducer_1" Submodel_Instance="1" TITLE="gear ratio" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="63" Submodel_Name="MECRSS0B" Data_Path="offset@openLoopSpeed" Submodel_Instance="1" TITLE="offset to be subtracted from angular velocity" TUNABLE="false" UNITS="rev/min" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="64" Submodel_Name="MECRSS0B" Data_Path="gain@openLoopSpeed" Submodel_Instance="1" TITLE="gain for signal output" TUNABLE="false" UNITS="min/rev" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="65" Submodel_Name="MECRSS0B" Data_Path="conv@openLoopSpeed" Submodel_Instance="1" TITLE="sign convention: positive from" TUNABLE="false"/>
  <PARAMETER VALUE="14.075" Param_Id="71" Submodel_Name="CONS00" Data_Path="k@openLoopCmd" Submodel_Instance="1" TITLE="constant value" LINKED_VARIABLE="k0GEN@openLoopCmd" TUNABLE="true" UNITS="null" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="89" Submodel_Name="MECRL0" Data_Path="w@rotaryload2ports_1" Submodel_Instance="1" TITLE="shaft speed at port 2" UNITS="rev/min" IS_DELTA="false"/>
  <PARAMETER VALUE="0.0015" Param_Id="74" Submodel_Name="MECRL0" Data_Path="J@rotaryload2ports_1" Submodel_Instance="1" TITLE="moment of inertia" TUNABLE="false" UNITS="kgm**2" IS_DELTA="false"/>
  <PARAMETER VALUE="0.03" Param_Id="75" Submodel_Name="MECRL0" Data_Path="vis@rotaryload2ports_1" Submodel_Instance="1" TITLE="coefficient of viscous friction" TUNABLE="false" UNITS="Nm/(rev/min)" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="76" Submodel_Name="MECRL0" Data_Path="coul@rotaryload2ports_1" Submodel_Instance="1" TITLE="Coulomb friction torque" TUNABLE="false" UNITS="Nm" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="77" Submodel_Name="MECRL0" Data_Path="stict@rotaryload2ports_1" Submodel_Instance="1" TITLE="stiction torque" TUNABLE="false" UNITS="Nm" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="78" Submodel_Name="MECRL0" Data_Path="friction@rotaryload2ports_1" Submodel_Instance="1" TITLE="use friction" TUNABLE="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="108" Submodel_Name="MECRL0" Data_Path="w@rotaryload2ports_3" Submodel_Instance="2" TITLE="shaft speed at port 2" UNITS="rev/min" IS_DELTA="false"/>
  <PARAMETER VALUE="0.04" Param_Id="93" Submodel_Name="MECRL0" Data_Path="J@rotaryload2ports_3" Submodel_Instance="2" TITLE="moment of inertia" TUNABLE="false" UNITS="kgm**2" IS_DELTA="false"/>
  <PARAMETER VALUE="0.03" Param_Id="94" Submodel_Name="MECRL0" Data_Path="vis@rotaryload2ports_3" Submodel_Instance="2" TITLE="coefficient of viscous friction" TUNABLE="false" UNITS="Nm/(rev/min)" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="95" Submodel_Name="MECRL0" Data_Path="coul@rotaryload2ports_3" Submodel_Instance="2" TITLE="Coulomb friction torque" TUNABLE="false" UNITS="Nm" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="96" Submodel_Name="MECRL0" Data_Path="stict@rotaryload2ports_3" Submodel_Instance="2" TITLE="stiction torque" TUNABLE="false" UNITS="Nm" IS_DELTA="false"/>
  <PARAMETER VALUE="2" Param_Id="97" Submodel_Name="MECRL0" Data_Path="friction@rotaryload2ports_3" Submodel_Instance="2" TITLE="use friction" TUNABLE="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="114" Submodel_Name="RSD00" Data_Path="are@rotaryspringdamper_1" Submodel_Instance="1" TITLE="relative angular displacement" UNITS="degree" IS_DELTA="false"/>
  <PARAMETER VALUE="10" Param_Id="112" Submodel_Name="RSD00" Data_Path="ktor@rotaryspringdamper_1" Submodel_Instance="1" TITLE="stiffness" TUNABLE="false" UNITS="Nm/degree" IS_DELTA="false"/>
  <PARAMETER VALUE="0.001" Param_Id="113" Submodel_Name="RSD00" Data_Path="rtor@rotaryspringdamper_1" Submodel_Instance="1" TITLE="damper rating" TUNABLE="false" UNITS="Nm/(rev/min)" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="130" Submodel_Name="UD00" Data_Path="tstart@piecewiselinear" Submodel_Instance="1" TITLE="time at which duty cycle starts" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="131" Submodel_Name="UD00" Data_Path="start1@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 1" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="132" Submodel_Name="UD00" Data_Path="end1@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 1" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0.45" Param_Id="133" Submodel_Name="UD00" Data_Path="t1@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 1" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="4" Param_Id="134" Submodel_Name="UD00" Data_Path="start2@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 2" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="4" Param_Id="135" Submodel_Name="UD00" Data_Path="end2@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 2" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0.01" Param_Id="136" Submodel_Name="UD00" Data_Path="t2@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 2" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="137" Submodel_Name="UD00" Data_Path="start3@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 3" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="138" Submodel_Name="UD00" Data_Path="end3@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 3" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0.7-0.45" Param_Id="139" Submodel_Name="UD00" Data_Path="t3@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 3" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="4" Param_Id="140" Submodel_Name="UD00" Data_Path="start4@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 4" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="4" Param_Id="141" Submodel_Name="UD00" Data_Path="end4@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 4" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0.01" Param_Id="142" Submodel_Name="UD00" Data_Path="t4@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 4" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="143" Submodel_Name="UD00" Data_Path="start5@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 5" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="144" Submodel_Name="UD00" Data_Path="end5@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 5" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="3" Param_Id="145" Submodel_Name="UD00" Data_Path="t5@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 5" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="146" Submodel_Name="UD00" Data_Path="start6@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 6" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="147" Submodel_Name="UD00" Data_Path="end6@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 6" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="3" Param_Id="148" Submodel_Name="UD00" Data_Path="t6@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 6" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="149" Submodel_Name="UD00" Data_Path="start7@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 7" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="150" Submodel_Name="UD00" Data_Path="end7@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 7" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="3" Param_Id="151" Submodel_Name="UD00" Data_Path="t7@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 7" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="152" Submodel_Name="UD00" Data_Path="start8@piecewiselinear" Submodel_Instance="1" TITLE="output at start of stage 8" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="153" Submodel_Name="UD00" Data_Path="end8@piecewiselinear" Submodel_Instance="1" TITLE="output at end of stage 8" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="3" Param_Id="154" Submodel_Name="UD00" Data_Path="t8@piecewiselinear" Submodel_Instance="1" TITLE="duration of stage 8" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="4" Param_Id="155" Submodel_Name="UD00" Data_Path="nstages@piecewiselinear" Submodel_Instance="1" TITLE="number of stages" TUNABLE="false"/>
  <PARAMETER VALUE="2" Param_Id="156" Submodel_Name="UD00" Data_Path="iscyclic@piecewiselinear" Submodel_Instance="1" TITLE="cyclic" TUNABLE="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="161" Submodel_Name="EBCT00" Data_Path="U@current_transducer" Submodel_Instance="1" TITLE="output voltage" UNITS="V" IS_DELTA="false"/>
  <PARAMETER VALUE="0" Param_Id="158" Submodel_Name="EBCT00" Data_Path="offset@current_transducer" Submodel_Instance="1" TITLE="offset to be subtracted from current" TUNABLE="false" UNITS="A" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="159" Submodel_Name="EBCT00" Data_Path="gain@current_transducer" Submodel_Instance="1" TITLE="gain for measured current" TUNABLE="false" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="160" Submodel_Name="EBCT00" Data_Path="conv@current_transducer" Submodel_Instance="1" TITLE="sign convention: positive from" TUNABLE="false"/>
  <PARAMETER VALUE="0" Param_Id="169" Submodel_Name="MECTS0B" Data_Path="offset@torquesensor2" Submodel_Instance="1" TITLE="offset to be subtracted from torque" TUNABLE="false" UNITS="Nm" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="170" Submodel_Name="MECTS0B" Data_Path="gain@torquesensor2" Submodel_Instance="1" TITLE="gain for signal output" TUNABLE="false" UNITS="1/(Nm)" IS_DELTA="false"/>
  <PARAMETER VALUE="1" Param_Id="171" Submodel_Name="MECTS0B" Data_Path="conv@torquesensor2" Submodel_Instance="1" TITLE="sign convention: positive from" TUNABLE="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="180" Submodel_Name="DYNCOSIMSHM01" Data_Path="p1__outputs@dynamic_cosim_shm_discrete" Submodel_Instance="1" TITLE="output variable at port 1" UNITS="null" IS_DELTA="false"/>
  <PARAMETER IS_LINKED_VARIABLE="false" VALUE="0.00000000000000e+000" Param_Id="181" Submodel_Name="DYNCOSIMSHM01" Data_Path="p2__outputs@dynamic_cosim_shm_discrete" Submodel_Instance="1" TITLE="output variable at port 2" UNITS="null" IS_DELTA="false"/>
  <PARAMETER VALUE="0.001" Param_Id="177" Submodel_Name="DYNCOSIMSHM01" Data_Path="samptime@dynamic_cosim_shm_discrete" Submodel_Instance="1" TITLE="sample time" TUNABLE="false" UNITS="s" IS_DELTA="false"/>
  <PARAMETER VALUE="2" Param_Id="178" Submodel_Name="DYNCOSIMSHM01" Data_Path="mode@dynamic_cosim_shm_discrete" Submodel_Instance="1" TITLE="mode" TUNABLE="false"/>
  <PARAMETER VALUE="shm_0" Param_Id="179" Submodel_Name="DYNCOSIMSHM01" Data_Path="shmName@dynamic_cosim_shm_discrete" Submodel_Instance="1" TITLE="shared memory identifier" TUNABLE="false"/>
 </PARAMS_LIST>
 <EXPOSED_COPY_LIST/>
 <GLOBAL_PARAMS_LIST/>
 <GLOBAL_LOCAL_PARAMS_LIST/>
</PL>
