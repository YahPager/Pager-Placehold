/*
██████████File: fn_copLights.sqf████████████
███████Author: Pager & [GSN] Paronity███████
██████████Date Created: 2.24.2015███████████
███████Date Modified: 04.23.2017 v4.0███████
*/

private _Veh = _this select 0;
private _Type = typeOf _Veh;

if (_Veh getVariable ["lights", false]) exitWith {};

_Veh setVariable ["lights", true, false];

while {!isNil "_Veh" && !isNull _Veh && _Veh getVariable ["lights",false]} do
{
	// Light Color
	private _CR = [255, 0, 0];
	private _CW = [255, 255, 255];
	private _CB = [0, 0, 255];
	// Ambient Light Color
	private _AR = [0.0255, 0, 0];
	private _AW = [0.0255, 0.0255, 0.0255];
	private _AB = [0, 0, 0.0255];

	if (sunOrMoon < 1) then
	{// Night
		private _BL = 0;
		private _BH = 20;
		private _Att = [0.001, 3000, 50, 500000, 0.001, 250];
		private _Inty = 100;
	} else {// Day
		_BL = 0;
		_BH = 100;
		_Att = [0.001, 0, 50, 2500000, 0.001, 250];
		_Inty = 1000;
	};

	private _FLS = 3;
	private _FON = 0.05;
	private _OFF = 0.075;

	private _LL = [];
	private _RL = [];

	_Attach =
	{
		_IsLight = _this select 0;
		_Color = _this select 1;
		_Pos = _this select 2;
		_Light = "#lightpoint" createVehicleLocal getPos _Veh;
		_Light setLightBrightness 0;
		_Light setLightAttenuation _Att;
		_Light setLightIntensity _Inty;
		_Light setLightFlareSize 1;
		_Light setLightFlareMaxDistance 150;
		_Light setLightUseFlare true;
		_Light setLightDayLight true;

		switch (_Color) do
		{
			case "RED":
			{
				_light setLightColor _CR;
				_light setLightAmbient _AR;
			};
			case "WHITE":
			{
				_light setLightColor _CW;
				_light setLightAmbient _AW;
			};
			case "BLUE":
			{
				_light setLightColor _CB;
				_light setLightAmbient _AB;
			};
		};

		if (_IsLight) then
		{
			_LL pushBack [_Light, _Pos];
		} else {
			_LR pushBack [_Light, _Pos];
		};

		_Light lightAttachObject [_Veh, _Pos];
	};

	switch (_Type) do
	{
		case "C_Offroad_01_F": //OFFROAD
		{
			[false, "RED", [-0.44, 0, 0.525]] call _attach;
			[true, "BLUE", [0.345, 0, 0.525]] call _attach;
			[false, "RED", [0.575, -2.95, -0.77]] call _attach;
			[true, "BLUE", [-0.645, -2.95, -0.77]] call _attach;
			[false, "RED", [-0.905, -2.875, -0.225]] call _attach;
			[true, "RED", [0.825, -2.875, -0.225]] call _attach;
			[false, "WHITE", [0.61, 2.2825, -0.355]] call _attach;
			[true, "WHITE", [-0.695, 2.2825, -0.355]] call _attach;
		};

		case "B_G_Offroad_01_F": //BG_OFFROAD
		{
			[false, "RED", [0.575, -2.95, -0.77]] call _attach;
			[true, "BLUE", [-0.645, -2.95, -0.77]] call _attach;
			[false, "RED", [-0.905, -2.875, -0.225]] call _attach;
			[true, "RED", [0.825, -2.875, -0.225]] call _attach;
			[true, "BLUE", [0.61, 2.2825, -0.355]] call _attach;
			[false, "RED", [-0.695, 2.2825, -0.355]] call _attach;
		};

		case "C_SUV_01_F": //SUV
		{
			[true, "RED", [-0.39, 2.28, -0.52]] call _attach;
			[false, "BLUE", [0.38, 2.28, -0.52]] call _attach;
			[true, "RED", [-0.86, -2.75, -0.18]] call _attach;
			[true, "RED", [0.86, -2.75, -0.18]] call _attach;
			[false, "BLUE", [-0.6, -2.925, -0.24]] call _attach;
			[false, "BLUE", [0.59, -2.925, -0.24]] call _attach;
			[true, "WHITE", [0.8, 1.95, -0.48]] call _attach;
			[false, "WHITE", [-0.8, 1.95, -0.48]] call _attach;
		};

		case "C_Hatchback_01_F": //Hatchback
		{
			[false, "BLUE", [-0.03, 0, 0.2]] call _attach;
			[true, "BLUE", [-0.03, 0, 0.2]] call _attach;
			[false, "BLUE", [-0.8, -2.25, -0.3]] call _attach;
			[true, "BLUE", [0.78, -2.25, -0.3]] call _attach;
			[false, "WHITE", [0.75, 1.615, -0.52]] call _attach;
			[true, "WHITE", [-0.8, 1.615, -0.525]] call _attach;
		};

		case "C_Hatchback_01_sport_F": //Hatchback Sport
		{
			[false, "RED", [-0.03, 0, 0.2]] call _attach;
			[true, "BLUE", [-0.03, 0, 0.2]] call _attach;
			[false, "RED", [-0.8, -2.25, -0.3]] call _attach;
			[true, "BLUE", [0.78, -2.25, -0.3]] call _attach;
			[false, "WHITE", [0.75, 1.615, -0.52]] call _attach;
			[true, "WHITE", [-0.8, 1.615, -0.525]] call _attach;
		};

		case "B_MRAP_01_F": //HUNTER
		{
			[false, "RED", [-0.85, -0.9, 0.6]] call _attach;
			[true, "BLUE", [0.85, -0.9, 0.6]] call _attach;
			[true, "RED", [-0.93, -2.8, 0.6]] call _attach;
			[false, "BLUE", [0.93, -2.8, 0.6]] call _attach;
			[true, "WHITE", [-0.85, 1.475, -0.75]] call _attach;
			[false, "WHITE", [0.85, 1.475, -0.75]] call _attach;
		};

		case "O_MRAP_02_F": //IFRIT
		{
			[false, "BLUE", [1.175, -1.5, 0.365]] call _attach;
			[true, "RED", [-1.175, -1.5, 0.365]] call _attach;
			[false, "RED", [0.4325, -1.5, 0.6275]] call _attach;
			[true, "BLUE", [0.4325, -1.5, 0.6275]] call _attach;
			[true, "RED", [-0.2, 1.575, -1.125]] call _attach;
			[false, "BLUE", [0.2, 1.575, -1.125]] call _attach;
			[false, "WHITE", [-0.775, 1.475, -1]] call _attach;
			[true, "WHITE", [0.775, 1.475, -1]] call _attach;
			[true, "RED", [0.525, -4.5, -1.3]] call _attach;
			[false, "BLUE", [-0.525, -4.5, -1.3]] call _attach;
			[true, "RED", [-0.4, -4.95, 0.155]] call _attach;
			[false, "BLUE", [0.4, -4.95, 0.155]] call _attach;
		};

		case "C_Offroad_02_unarmed_F": //JEEP
		{
			[false, "RED", [0.5, 1.25, -0.16]] call _attach;
			[true, "BLUE", [-0.5, 1.25, -0.16]] call _attach;
		};
	};

	while {(alive _Veh && _Veh getVariable ["lights",false])} do
	{
		for [{_i=0}, {_i<_FLS}, {_i=_i+1}] do
		{
			{ (_x select 0) setLightBrightness _BH; } forEach _LL;
			uiSleep _FON;
			{ (_x select 0) setLightBrightness _BL; } forEach _LL;
			uiSleep _OFF;
		};

		{ (SEL(_x,0)) setLightBrightness 0; } forEach _LL;

		for [{_i=0}, {_i<_FLS}, {_i=_i+1}] do
		{
			{ (_x select 0) setLightBrightness _BH; } forEach _LR;
			uiSleep _FON;
			{ (_x select 0) setLightBrightness _BL; } forEach _LR;
			uiSleep _OFF;
		};

		{ (_x select 0) setLightBrightness 0; } forEach _LR;
	};

	{ deleteVehicle (_x select 0) } foreach _LL;
	{ deleteVehicle (_x select 0) } foreach _LR;

	_LL = [];
	_LR = [];
};

_Veh setVariable ["lights", false, true];
