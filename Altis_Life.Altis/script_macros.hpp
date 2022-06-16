/* System Wide Stuff */
#define SYSTEM_TAG "life"
#define ITEM_TAG format ["%1%2",SYSTEM_TAG,"item_"]
#define CASH life_cash
#define BANK life_atmbank
#define GANG_FUNDS group player getVariable ["gang_bank",0];

//RemoteExec Macros
#define RSERV 2 //Only server
#define RCLIENT -2 //Except server
#define RANY 0 //Global

//Scripting Macros
#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define CONSTVAR(var) var = compileFinal (if (var isEqualType "") then {var} else {str(var)})
#define FETCH_CONST(var) (call var)

//Display Macros
#define CONTROL(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
#define CONTROL_DATA(ctrl) (lbData[ctrl,lbCurSel ctrl])
#define CONTROL_DATAI(ctrl,index) ctrl lbData index

//System Macros
#define LICENSE_VARNAME(varName,flag) format ["license_%1_%2",flag,M_CONFIG(getText,"Licenses",varName,"variable")]
#define LICENSE_VALUE(varName,flag) missionNamespace getVariable [LICENSE_VARNAME(varName,flag),false]
#define ITEM_VARNAME(varName) format ["life_inv_%1",M_CONFIG(getText,"VirtualItems",varName,"variable")]
#define ITEM_VALUE(varName) missionNamespace getVariable [ITEM_VARNAME(varName),0]
#define ITEM_ILLEGAL(varName) M_CONFIG(getNumber,"VirtualItems",varName,"illegal")
#define ITEM_SELLPRICE(varName) M_CONFIG(getNumber,"VirtualItems",varName,"sellPrice")
#define ITEM_BUYPRICE(varName) M_CONFIG(getNumber,"VirtualItems",varName,"buyPrice")
#define ITEM_NAME(varName) M_CONFIG(getText,"VirtualItems",varName,"displayName")

//Condition Macros
#define KINDOF_ARRAY(a,b) [##a,##b] call {_veh = _this select 0;_types = _this select 1;_res = false; {if (_veh isKindOf _x) exitWith { _res = true };} forEach _types;_res}

//Config Macros
#define FETCH_CONFIG(TYPE,CFG,SECTION,CLASS,ENTRY) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY)
#define FETCH_CONFIG2(TYPE,CFG,CLASS,ENTRY) TYPE(configFile >> CFG >> CLASS >> ENTRY)
#define FETCH_CONFIG3(TYPE,CFG,SECTION,CLASS,ENTRY,SUB) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY >> SUB)
#define FETCH_CONFIG4(TYPE,CFG,SECTION,CLASS,ENTRY,SUB,SUB2) TYPE(configFile >> CFG >> SECTION >> CLASS >> ENTRY >> SUB >> SUB2)
#define M_CONFIG(TYPE,CFG,CLASS,ENTRY) TYPE(missionConfigFile >> CFG >> CLASS >> ENTRY)
#define BASE_CONFIG(CFG,CLASS) inheritsFrom(configFile >> CFG >> CLASS)
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

//UI Macros
#define LIFEdisplay (uiNamespace getVariable ["playerHUD",displayNull])
#define LIFEctrl(ctrl) ((uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl ctrl)

//SpyGlass Macros
#define SPYGLASS_END \
    vehicle player setVelocity[1e10,1e14,1e18]; \
    sleep 3; \
    preprocessFile "SpyGlass\endoftheline.sqf"; \
    sleep 2.5; \
    failMission "SpyGlass";

//Pager's Macros
#define CATT call _attach
#define QUAD "C_Quadbike_01_F"
#define HATCH "C_Hatchback_01_F"
#define SPORT "C_Hatchback_01_sport_F"
#define SUV "C_SUV_01_F"
#define OFFROAD "C_Offroad_01_F"
#define BG_OFFROAD "B_G_Offroad_01_F"
#define HUNTER "B_MRAP_01_F"
#define IFRIT "O_MRAP_02_F"
#define JEEP "C_Offroad_02_unarmed_F"
#define NAP uiSleep
#define SEL (ARRAY,INDEX) (ARRAY select INDEX)
#define GVAR getVariable
#define SVAR setVariable
#define TARGET cursorTarget
#define vehPLAY vehicle player
#define currPLAY currentWeapon player
#define SHIFT (_shift) then {_handled = true;
#define SLB setLightBrightness
#define SLA setLightAmbient
#define SLAT setLightAttenuation
#define SLI setLightIntensity
#define SLFS setLightFlareSize
#define SLFMD setLightFlareMaxDistance
#define SLUF setLightUseFlare
#define SLDL setLightDayLight
#define SLC setLightColor
#define LAO lightAttachObject
#define CVL createVehicleLocal
#define DVEH deleteVehicle
