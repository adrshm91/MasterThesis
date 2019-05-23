<?xml version="1.0" encoding="ISO-8859-1"?>
<!DOCTYPE PL>
<PL VersionId="2019.1.0 - 81842-80938 2019" checksum="20423718" DOC_VERSION="1">
 <PARAMS_LIST>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="angular speed (always zero)" Param_Id="2711" Submodel_Name="W000" Data_Path="wzero@zeroomegasource_1" UNITS="rev/min" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="fixed angle" Param_Id="2712" Submodel_Name="W000" Data_Path="theta@zeroomegasource_1" UNITS="degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="2.50000000000000e+001" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="temperature at port 1" Param_Id="2710" Submodel_Name="THTS1" Data_Path="t1@th_temperature_source_1" UNITS="degC" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="zero volt voltage" Param_Id="2788" Submodel_Name="EBZV01" Data_Path="V1@potential_reference_2" UNITS="V" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="armature winding input current" Param_Id="2720" Submodel_Name="EMDPMDC01" Data_Path="Ia@emd_DirectCurrentMachine_1" UNITS="A" Submodel_Instance="1"/>
  <PARAMETER VALUE="25" IS_DELTA="false" TITLE="reference temperature" TUNABLE="false" Param_Id="2713" Submodel_Name="EMDPMDC01" Data_Path="T0@emd_DirectCurrentMachine_1" UNITS="degC" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.2" IS_DELTA="false" TITLE="armature winding resistance at reference temperature" TUNABLE="false" Param_Id="2714" Submodel_Name="EMDPMDC01" Data_Path="Ra0@emd_DirectCurrentMachine_1" UNITS="Ohm" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="corrective coefficient on armature winding resistance" TUNABLE="false" Param_Id="2715" Submodel_Name="EMDPMDC01" Data_Path="alphaRa@emd_DirectCurrentMachine_1" UNITS="1/K" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00086" IS_DELTA="false" TITLE="armature winding inductance" TUNABLE="false" Param_Id="2716" Submodel_Name="EMDPMDC01" Data_Path="La@emd_DirectCurrentMachine_1" UNITS="H" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.13" IS_DELTA="false" TITLE="electromotive force and torque constant at reference temperature" TUNABLE="false" Param_Id="2717" Submodel_Name="EMDPMDC01" Data_Path="Kt0@emd_DirectCurrentMachine_1" UNITS="V*s/rad" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="corrective coefficient on electromotive force and torque constant" TUNABLE="false" Param_Id="2718" Submodel_Name="EMDPMDC01" Data_Path="alphaKt@emd_DirectCurrentMachine_1" UNITS="1/K" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="zero volt voltage" Param_Id="2785" Submodel_Name="EBZV01" Data_Path="V1@potential_reference_3" UNITS="V" Submodel_Instance="2"/>
  <PARAMETER VALUE="10" IS_DELTA="false" TITLE="gear ratio" TUNABLE="false" Param_Id="2752" Submodel_Name="RN001" Data_Path="alpha@reducer" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="shaft speed at port 2" Param_Id="2836" Submodel_Name="MECRL0" Data_Path="w@rotaryload2ports" UNITS="rev/min" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.001" IS_DELTA="false" TITLE="moment of inertia" TUNABLE="false" Param_Id="2821" Submodel_Name="MECRL0" Data_Path="J@rotaryload2ports" UNITS="kgm**2" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.03" IS_DELTA="false" TITLE="coefficient of viscous friction" TUNABLE="false" Param_Id="2822" Submodel_Name="MECRL0" Data_Path="vis@rotaryload2ports" UNITS="Nm/(rev/min)" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="Coulomb friction torque" TUNABLE="false" Param_Id="2823" Submodel_Name="MECRL0" Data_Path="coul@rotaryload2ports" UNITS="Nm" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="stiction torque" TUNABLE="false" Param_Id="2824" Submodel_Name="MECRL0" Data_Path="stict@rotaryload2ports" UNITS="Nm" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" TITLE="use friction" TUNABLE="false" Param_Id="2825" Submodel_Name="MECRL0" Data_Path="friction@rotaryload2ports" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="shaft speed at port 2" Param_Id="2781" Submodel_Name="MECRL0" Data_Path="w@rotaryload2ports_2" UNITS="rev/min" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.04" IS_DELTA="false" TITLE="moment of inertia" TUNABLE="false" Param_Id="2766" Submodel_Name="MECRL0" Data_Path="J@rotaryload2ports_2" UNITS="kgm**2" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.03" IS_DELTA="false" TITLE="coefficient of viscous friction" TUNABLE="false" Param_Id="2767" Submodel_Name="MECRL0" Data_Path="vis@rotaryload2ports_2" UNITS="Nm/(rev/min)" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="Coulomb friction torque" TUNABLE="false" Param_Id="2768" Submodel_Name="MECRL0" Data_Path="coul@rotaryload2ports_2" UNITS="Nm" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="stiction torque" TUNABLE="false" Param_Id="2769" Submodel_Name="MECRL0" Data_Path="stict@rotaryload2ports_2" UNITS="Nm" Submodel_Instance="2"/>
  <PARAMETER VALUE="2" TITLE="use friction" TUNABLE="false" Param_Id="2770" Submodel_Name="MECRL0" Data_Path="friction@rotaryload2ports_2" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="relative angular displacement" Param_Id="2661" Submodel_Name="RSD00" Data_Path="are@rotaryspringdamper" UNITS="degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="10" IS_DELTA="false" TITLE="stiffness" TUNABLE="false" Param_Id="2659" Submodel_Name="RSD00" Data_Path="ktor@rotaryspringdamper" UNITS="Nm/degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.001" IS_DELTA="false" TITLE="damper rating" TUNABLE="false" Param_Id="2660" Submodel_Name="RSD00" Data_Path="rtor@rotaryspringdamper" UNITS="Nm/(rev/min)" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="offset to be subtracted from angular velocity" TUNABLE="false" Param_Id="2744" Submodel_Name="MECRSS0B" Data_Path="offset@closedLoopSpeed" UNITS="rev/min" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" IS_DELTA="false" TITLE="gain for signal output" TUNABLE="false" Param_Id="2745" Submodel_Name="MECRSS0B" Data_Path="gain@closedLoopSpeed" UNITS="min/rev" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" TITLE="sign convention: positive from" TUNABLE="false" Param_Id="2746" Submodel_Name="MECRSS0B" Data_Path="conv@closedLoopSpeed" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="angular displacement" Param_Id="2760" Submodel_Name="MECADS0B" Data_Path="phi@anglesensor2" UNITS="degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="offset to be subtracted from angle" TUNABLE="false" Param_Id="2757" Submodel_Name="MECADS0B" Data_Path="offset@anglesensor2" UNITS="degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" IS_DELTA="false" TITLE="gain for signal output" TUNABLE="false" Param_Id="2758" Submodel_Name="MECADS0B" Data_Path="gain@anglesensor2" UNITS="1/degree" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" TITLE="sign convention: positive from" TUNABLE="false" Param_Id="2759" Submodel_Name="MECADS0B" Data_Path="conv@anglesensor2" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" TITLE="output value" TUNABLE="false" Param_Id="2622" Submodel_Name="FX00" Data_Path="outputtype@fofx_2" Submodel_Instance="1"/>
  <PARAMETER VALUE="2" TITLE="discontinuity handling" TUNABLE="false" Param_Id="2623" Submodel_Name="FX00" Data_Path="disc@fofx_2" Submodel_Instance="1"/>
  <PARAMETER VALUE="a0*x*x/2*(x&lt;t1)+(v0*x-v0**2/(2*a0))*(x>=t1)*(x&lt;t2)+(x2-a0/2*(x-t2)**2+v0*(x-t2))*(x>=t2)*(x&lt;=t3)+xf*(x>t3)" TITLE="expression in terms of the input x" TUNABLE="false" Param_Id="2624" Submodel_Name="FX00" Data_Path="fstr@fofx_2" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="time at which duty cycle starts" TUNABLE="false" Param_Id="2682" Submodel_Name="UD00" Data_Path="tstart@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 1" TUNABLE="false" Param_Id="2683" Submodel_Name="UD00" Data_Path="start1@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="output at end of stage 1" TUNABLE="false" Param_Id="2684" Submodel_Name="UD00" Data_Path="end1@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="duration of stage 1" TUNABLE="false" Param_Id="2685" Submodel_Name="UD00" Data_Path="t1@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="output at start of stage 2" TUNABLE="false" Param_Id="2686" Submodel_Name="UD00" Data_Path="start2@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="output at end of stage 2" TUNABLE="false" Param_Id="2687" Submodel_Name="UD00" Data_Path="end2@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.2" IS_DELTA="false" TITLE="duration of stage 2" TUNABLE="false" Param_Id="2688" Submodel_Name="UD00" Data_Path="t2@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="output at start of stage 3" TUNABLE="false" Param_Id="2689" Submodel_Name="UD00" Data_Path="start3@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 3" TUNABLE="false" Param_Id="2690" Submodel_Name="UD00" Data_Path="end3@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="t3" IS_DELTA="false" TITLE="duration of stage 3" TUNABLE="false" Param_Id="2691" Submodel_Name="UD00" Data_Path="t3@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 4" TUNABLE="false" Param_Id="2692" Submodel_Name="UD00" Data_Path="start4@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 4" TUNABLE="false" Param_Id="2693" Submodel_Name="UD00" Data_Path="end4@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.2" IS_DELTA="false" TITLE="duration of stage 4" TUNABLE="false" Param_Id="2694" Submodel_Name="UD00" Data_Path="t4@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 5" TUNABLE="false" Param_Id="2695" Submodel_Name="UD00" Data_Path="start5@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 5" TUNABLE="false" Param_Id="2696" Submodel_Name="UD00" Data_Path="end5@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 5" TUNABLE="false" Param_Id="2697" Submodel_Name="UD00" Data_Path="t5@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 6" TUNABLE="false" Param_Id="2698" Submodel_Name="UD00" Data_Path="start6@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 6" TUNABLE="false" Param_Id="2699" Submodel_Name="UD00" Data_Path="end6@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 6" TUNABLE="false" Param_Id="2700" Submodel_Name="UD00" Data_Path="t6@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 7" TUNABLE="false" Param_Id="2701" Submodel_Name="UD00" Data_Path="start7@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 7" TUNABLE="false" Param_Id="2702" Submodel_Name="UD00" Data_Path="end7@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 7" TUNABLE="false" Param_Id="2703" Submodel_Name="UD00" Data_Path="t7@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 8" TUNABLE="false" Param_Id="2704" Submodel_Name="UD00" Data_Path="start8@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 8" TUNABLE="false" Param_Id="2705" Submodel_Name="UD00" Data_Path="end8@piecewiselinear" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 8" TUNABLE="false" Param_Id="2706" Submodel_Name="UD00" Data_Path="t8@piecewiselinear" UNITS="s" Submodel_Instance="1"/>
  <PARAMETER VALUE="4" TITLE="number of stages" TUNABLE="false" Param_Id="2707" Submodel_Name="UD00" Data_Path="nstages@piecewiselinear" Submodel_Instance="1"/>
  <PARAMETER VALUE="2" TITLE="cyclic" TUNABLE="false" Param_Id="2708" Submodel_Name="UD00" Data_Path="iscyclic@piecewiselinear" Submodel_Instance="1"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="time at which duty cycle starts" TUNABLE="false" Param_Id="2594" Submodel_Name="UD00" Data_Path="tstart@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 1" TUNABLE="false" Param_Id="2595" Submodel_Name="UD00" Data_Path="start1@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 1" TUNABLE="false" Param_Id="2596" Submodel_Name="UD00" Data_Path="end1@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.45" IS_DELTA="false" TITLE="duration of stage 1" TUNABLE="false" Param_Id="2597" Submodel_Name="UD00" Data_Path="t1@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="4" IS_DELTA="false" TITLE="output at start of stage 2" TUNABLE="false" Param_Id="2598" Submodel_Name="UD00" Data_Path="start2@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="4" IS_DELTA="false" TITLE="output at end of stage 2" TUNABLE="false" Param_Id="2599" Submodel_Name="UD00" Data_Path="end2@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.01" IS_DELTA="false" TITLE="duration of stage 2" TUNABLE="false" Param_Id="2600" Submodel_Name="UD00" Data_Path="t2@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 3" TUNABLE="false" Param_Id="2601" Submodel_Name="UD00" Data_Path="start3@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 3" TUNABLE="false" Param_Id="2602" Submodel_Name="UD00" Data_Path="end3@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.7-0.45" IS_DELTA="false" TITLE="duration of stage 3" TUNABLE="false" Param_Id="2603" Submodel_Name="UD00" Data_Path="t3@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="4" IS_DELTA="false" TITLE="output at start of stage 4" TUNABLE="false" Param_Id="2604" Submodel_Name="UD00" Data_Path="start4@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="4" IS_DELTA="false" TITLE="output at end of stage 4" TUNABLE="false" Param_Id="2605" Submodel_Name="UD00" Data_Path="end4@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.01" IS_DELTA="false" TITLE="duration of stage 4" TUNABLE="false" Param_Id="2606" Submodel_Name="UD00" Data_Path="t4@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 5" TUNABLE="false" Param_Id="2607" Submodel_Name="UD00" Data_Path="start5@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 5" TUNABLE="false" Param_Id="2608" Submodel_Name="UD00" Data_Path="end5@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 5" TUNABLE="false" Param_Id="2609" Submodel_Name="UD00" Data_Path="t5@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 6" TUNABLE="false" Param_Id="2610" Submodel_Name="UD00" Data_Path="start6@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 6" TUNABLE="false" Param_Id="2611" Submodel_Name="UD00" Data_Path="end6@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 6" TUNABLE="false" Param_Id="2612" Submodel_Name="UD00" Data_Path="t6@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 7" TUNABLE="false" Param_Id="2613" Submodel_Name="UD00" Data_Path="start7@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 7" TUNABLE="false" Param_Id="2614" Submodel_Name="UD00" Data_Path="end7@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 7" TUNABLE="false" Param_Id="2615" Submodel_Name="UD00" Data_Path="t7@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at start of stage 8" TUNABLE="false" Param_Id="2616" Submodel_Name="UD00" Data_Path="start8@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="output at end of stage 8" TUNABLE="false" Param_Id="2617" Submodel_Name="UD00" Data_Path="end8@piecewiselinear_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="3" IS_DELTA="false" TITLE="duration of stage 8" TUNABLE="false" Param_Id="2618" Submodel_Name="UD00" Data_Path="t8@piecewiselinear_1" UNITS="s" Submodel_Instance="2"/>
  <PARAMETER VALUE="4" TITLE="number of stages" TUNABLE="false" Param_Id="2619" Submodel_Name="UD00" Data_Path="nstages@piecewiselinear_1" Submodel_Instance="2"/>
  <PARAMETER VALUE="2" TITLE="cyclic" TUNABLE="false" Param_Id="2620" Submodel_Name="UD00" Data_Path="iscyclic@piecewiselinear_1" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="integral part" Param_Id="2802" Submodel_Name="SIGPIDT0" Data_Path="ipart@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="control error" Param_Id="2806" Submodel_Name="SIGPIDT0" Data_Path="u0@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.0397802" IS_DELTA="false" TITLE="proportional gain" TUNABLE="true" Param_Id="2789" Submodel_Name="SIGPIDT0" Data_Path="Kp@pidtune" LINKED_VARIABLE="Kp0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="7.06984" IS_DELTA="false" TITLE="integral gain" TUNABLE="true" Param_Id="2790" Submodel_Name="SIGPIDT0" Data_Path="Ki@pidtune" LINKED_VARIABLE="Ki0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.000600928" IS_DELTA="false" TITLE="derivative gain" TUNABLE="true" Param_Id="2791" Submodel_Name="SIGPIDT0" Data_Path="Kd@pidtune" LINKED_VARIABLE="Kd0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="1.51062523697e-05" IS_DELTA="false" TITLE="time constant for first order lag used to estimate derivative" TUNABLE="true" Param_Id="2792" Submodel_Name="SIGPIDT0" Data_Path="tau@pidtune" LINKED_VARIABLE="tau0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="-48" IS_DELTA="false" TITLE="minimum permitted output value" TUNABLE="true" Param_Id="2793" Submodel_Name="SIGPIDT0" Data_Path="outmin@pidtune" LINKED_VARIABLE="outmin0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="48" IS_DELTA="false" TITLE="maximum permitted output value" TUNABLE="true" Param_Id="2794" Submodel_Name="SIGPIDT0" Data_Path="outmax@pidtune" LINKED_VARIABLE="outmax0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="7.06984" IS_DELTA="false" TITLE="backtracking gain" TUNABLE="true" Param_Id="2795" Submodel_Name="SIGPIDT0" Data_Path="Ks@pidtune" LINKED_VARIABLE="Ks0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.1" IS_DELTA="false" TITLE="hysteresis" TUNABLE="true" Param_Id="2796" Submodel_Name="SIGPIDT0" Data_Path="hyst@pidtune" LINKED_VARIABLE="hyst0GEN@pidtune" UNITS="null" Submodel_Instance="1"/>
  <PARAMETER VALUE="2" TITLE="linearization behavior" TUNABLE="false" Param_Id="2797" Submodel_Name="SIGPIDT0" Data_Path="linmode@pidtune" Submodel_Instance="1"/>
  <PARAMETER VALUE="1" TITLE="controller type" TUNABLE="false" Param_Id="2798" Submodel_Name="SIGPIDT0" Data_Path="outputtype@pidtune" Submodel_Instance="1"/>
  <PARAMETER VALUE="2" TITLE="limit output" TUNABLE="true" Param_Id="2799" Submodel_Name="SIGPIDT0" Data_Path="outlim@pidtune" LINKED_VARIABLE="outlim0GEN@pidtune" Submodel_Instance="1"/>
  <PARAMETER VALUE="3" TITLE="anti windup method" TUNABLE="true" Param_Id="2800" Submodel_Name="SIGPIDT0" Data_Path="antiwind@pidtune" LINKED_VARIABLE="antiwind0GEN@pidtune" Submodel_Instance="1"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="integral part" Param_Id="2640" Submodel_Name="SIGPIDT0" Data_Path="ipart@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.00000000000000e+000" IS_DELTA="false" IS_LINKED_VARIABLE="false" TITLE="control error" Param_Id="2644" Submodel_Name="SIGPIDT0" Data_Path="u0@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="5.23606" IS_DELTA="false" TITLE="proportional gain" TUNABLE="true" Param_Id="2627" Submodel_Name="SIGPIDT0" Data_Path="Kp@pidtune_1" LINKED_VARIABLE="Kp0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="integral gain" TUNABLE="true" Param_Id="2628" Submodel_Name="SIGPIDT0" Data_Path="Ki@pidtune_1" LINKED_VARIABLE="Ki0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.102577" IS_DELTA="false" TITLE="derivative gain" TUNABLE="true" Param_Id="2629" Submodel_Name="SIGPIDT0" Data_Path="Kd@pidtune_1" LINKED_VARIABLE="Kd0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="1.95904224817e-05" IS_DELTA="false" TITLE="time constant for first order lag used to estimate derivative" TUNABLE="true" Param_Id="2630" Submodel_Name="SIGPIDT0" Data_Path="tau@pidtune_1" LINKED_VARIABLE="tau0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="-1e+30" IS_DELTA="false" TITLE="minimum permitted output value" TUNABLE="true" Param_Id="2631" Submodel_Name="SIGPIDT0" Data_Path="outmin@pidtune_1" LINKED_VARIABLE="outmin0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="1e+30" IS_DELTA="false" TITLE="maximum permitted output value" TUNABLE="true" Param_Id="2632" Submodel_Name="SIGPIDT0" Data_Path="outmax@pidtune_1" LINKED_VARIABLE="outmax0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0" IS_DELTA="false" TITLE="backtracking gain" TUNABLE="true" Param_Id="2633" Submodel_Name="SIGPIDT0" Data_Path="Ks@pidtune_1" LINKED_VARIABLE="Ks0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="0.1" IS_DELTA="false" TITLE="hysteresis" TUNABLE="true" Param_Id="2634" Submodel_Name="SIGPIDT0" Data_Path="hyst@pidtune_1" LINKED_VARIABLE="hyst0GEN@pidtune_1" UNITS="null" Submodel_Instance="2"/>
  <PARAMETER VALUE="1" TITLE="linearization behavior" TUNABLE="false" Param_Id="2635" Submodel_Name="SIGPIDT0" Data_Path="linmode@pidtune_1" Submodel_Instance="2"/>
  <PARAMETER VALUE="1" TITLE="controller type" TUNABLE="false" Param_Id="2636" Submodel_Name="SIGPIDT0" Data_Path="outputtype@pidtune_1" Submodel_Instance="2"/>
  <PARAMETER VALUE="1" TITLE="limit output" TUNABLE="true" Param_Id="2637" Submodel_Name="SIGPIDT0" Data_Path="outlim@pidtune_1" LINKED_VARIABLE="outlim0GEN@pidtune_1" Submodel_Instance="2"/>
  <PARAMETER VALUE="3" TITLE="anti windup method" TUNABLE="true" Param_Id="2638" Submodel_Name="SIGPIDT0" Data_Path="antiwind@pidtune_1" LINKED_VARIABLE="antiwind0GEN@pidtune_1" Submodel_Instance="2"/>
 </PARAMS_LIST>
 <EXPOSED_COPY_LIST/>
 <GLOBAL_PARAMS_LIST>
  <PARAMETER VALUE="90" IS_DELTA="false" TITLE="final position" TUNABLE="false" Param_Id="0" Data_Path="target_angle" UNITS="deg"/>
  <PARAMETER VALUE="150" IS_DELTA="false" TITLE="speed" TUNABLE="false" Param_Id="0" Data_Path="target_rpm" UNITS="rpm"/>
  <PARAMETER VALUE="200/0.06" IS_DELTA="false" TITLE="acceleration" TUNABLE="false" Param_Id="0" Data_Path="target_acc" UNITS="rpm/s"/>
  <PARAMETER VALUE="target_rpm*360/60" IS_DELTA="false" TITLE="velocity" TUNABLE="false" Param_Id="0" Data_Path="v0" UNITS="deg/s"/>
  <PARAMETER VALUE="target_angle" IS_DELTA="false" TITLE="final position" TUNABLE="false" Param_Id="0" Data_Path="xf" UNITS="deg"/>
  <PARAMETER VALUE="max(target_acc*360/60,v0**2/xf)" IS_DELTA="false" TITLE="acceleration" TUNABLE="false" Param_Id="0" Data_Path="a0" UNITS="deg/s/s"/>
  <PARAMETER VALUE="v0/a0" IS_DELTA="false" TITLE="end date of constant acceleration" TUNABLE="false" Param_Id="0" Data_Path="t1" UNITS="s"/>
  <PARAMETER VALUE="xf/v0" IS_DELTA="false" TITLE="end date of constant velocity" TUNABLE="false" Param_Id="0" Data_Path="t2" UNITS="s"/>
  <PARAMETER VALUE="t1+t2" IS_DELTA="false" TITLE="end date of travel" TUNABLE="false" Param_Id="0" Data_Path="t3" UNITS="s"/>
  <PARAMETER VALUE="xf-v0**2/(2*a0)" IS_DELTA="false" TITLE="position at t2" TUNABLE="false" Param_Id="0" Data_Path="x2" UNITS="deg"/>
 </GLOBAL_PARAMS_LIST>
 <GLOBAL_LOCAL_PARAMS_LIST/>
</PL>
