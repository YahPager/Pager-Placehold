#include <macro.h>
/*
██████████File: fn_medicLights.sqf██████████
████Author: [RGN] Pager & [GSN] Paronity████
████████Website: recklessgaming.com█████████
██████████Date Created: 2.24.2015███████████
███████Date Modified: 12.25.2015 v2.3███████
*/

private ["_Veh","_CRed","_CWhite","_CYellow","_LightsOn","_BHigh","_BLow","_Attach","_LLights","_RLights","_Type","_Att","_Inty"];

_Veh = SEL(_this,0);
_Type = typeOf _Veh;

if (isNil "_Veh" || isNull _Veh || !(_Veh GVAR ["lights", false])) exitWith {};

_Veh SVAR ["lights", true, false];

_CRed = [255, 0, 0];
_CWhite = [255, 255, 255];
_CYellow = [255, 255, 0];

if (sunOrMoon < 1) then
{// Night
	_BLow = 0;
	_BHigh = 20;
	_Att = [0.001, 3000, 50, 500000, 0.001, 250];
	_Inty = 150;
} else {// Day
	_BLow = 0;
	_BHigh = 100;
	_Att = [0.001, 0, 50, 2500000, 0.001, 250];
	_Inty = 750;
};

_Flashes = 4;
_FlashOn = 0.05;
_FlashOff = 0.075;

_LLights = [];
_RLights = [];

_Attach =
{
	_IsLight = SEL(_this,0);
	_Color = SEL(_this,1);
	_Pos = SEL(_this,2);
	_Light = "#lightpoint" CVL getPos _Veh;
	_Light SLB 0;
	_Light SLAM [0,0,0];
	_Light SLAT _Att;
	_Light SLI _Inty;
	_Light SLFS 1;
	_Light SLFMD 150;
	_Light SLUF true;
	_Light SLDL true;

	switch (_Color) do
	{
		case "RED": { _Light SLC _CRed; };
		case "WHITE": { _Light SLC _CWhite; };
		case "YELLOW": { _Light SLC _CYellow; };
	};

	if (_IsLight) then
	{
		_LLights pushBack [_Light, _Pos];
	} else {
		_RLights pushBack [_Light, _Pos];
	};

	_Light LAO [_Veh, _Pos];
};

switch (_Type) do
{
	case OFFROAD:
	{
		[false, "RED", [-0.44, 0, 0.5125]] CATT;
		[true, "YELLOW", [0.345, 0, 0.5125]] CATT;
		[false, "RED", [0.575, -2.95, -0.77]] CATT;
		[true, "YELLOW", [-0.645, -2.95, -0.77]] CATT;
		[false, "RED", [-0.905, -2.875, -0.225]] CATT;
		[true, "RED", [0.825, -2.875, -0.225]] CATT;
		[false, "WHITE", [0.61, 2.2825, -0.355]] CATT;
		[true, "WHITE", [-0.695, 2.2825, -0.355]] CATT;
	};

	case BG_REPAIR:
	{
		[false, "YELLOW", [-0.44, 0, 0.5125]] CATT;
		[true, "YELLOW", [0.345, 0, 0.5125]] CATT;
	};

	case REPAIR_OFFROAD:
	{
		[false, "YELLOW", [-0.44, 0, 0.5125]] CATT;
		[true, "YELLOW", [0.345, 0, 0.5125]] CATT;
	};

	case SUV:
	{
		[true, "RED", [-0.39, 2.28, -0.52]] CATT;
		[false, "YELLOW", [0.38, 2.28, -0.52]] CATT;
		[true, "RED", [-0.86, -2.75, -0.18]] CATT;
		[true, "RED", [0.86, -2.75, -0.18]] CATT;
		[false, "YELLOW", [-0.6, -2.925, -0.24]] CATT;
		[false, "YELLOW", [0.59, -2.925, -0.24]] CATT;
		[true, "WHITE", [0.8, 1.95, -0.48]] CATT;
		[false, "WHITE", [-0.8, 1.95, -0.48]] CATT;
	};

	case SPORT:
	{
		[false, "RED", [-0.03, -0, 0.2]] CATT;
		[true, "YELLOW", [-0.03, -0, 0.2]] CATT;
		[false, "RED", [-0.8, -2.25, -0.3]] CATT;
		[true, "YELLOW", [0.78, -2.25, -0.3]] CATT;
		[false, "WHITE", [0.75, 1.615, -0.52]] CATT;
		[true, "WHITE", [-0.8, 1.615, -0.525]] CATT;
	};

	case HATCH:
	{
		[false, "RED", [-0.03, -0, 0.2]] CATT;
		[true, "YELLOW", [-0.03, -0, 0.2]] CATT;
		[false, "RED", [-0.8, -2.25, -0.3]] CATT;
		[true, "YELLOW", [0.78, -2.25, -0.3]] CATT;
		[false, "WHITE", [0.75, 1.615, -0.52]] CATT;
		[true, "WHITE", [-0.8, 1.615, -0.525]] CATT;
	};

	case BOX_TRUCK:
	{
		[true, "RED", [-0.79, -0.17275, 1.325]] CATT;
		[true, "YELLOW", [0.75, -0.17275, 1.325]] CATT;
		[false, "RED", [-0.71, 2.1275, -0.75]] CATT;
		[false, "YELLOW", [0.675, 2.1275, -0.75]] CATT;
		[true, "WHITE", [0.62, 1.93, -0.4]] CATT;
		[true, "WHITE", [-0.665, 1.93, -0.4]] CATT;
		[false, "WHITE", [-0.025, -0.17275, 1.325]] CATT;
		[true, "RED", [-0.735, -3.4725, 1.26]] CATT;
		[true, "RED", [0.7125, -3.4725, 1.26]] CATT;
		[false, "YELLOW", [-0.225, -3.4725, 1.26]] CATT;
		[false, "YELLOW", [0.21, -3.4725, 1.26]] CATT;
	};

	case STRIDER:
	{
		[true, "YELLOW", [0.9, 2.2, -0.8]] CATT;
		[false, "RED", [-0.9, 2.2, -0.8]] CATT;
		[true, "YELLOW", [0, -3, 0.025]] CATT;
		[false, "RED", [-0.725, -3.1, 0.025]] CATT;
		[false, "RED", [0.725, -3.1, 0.025]] CATT;
		[false, "WHITE", [1.05, 2.25, -0.3]] CATT;
		[true, "WHITE", [-1.05, 2.25, -0.3]] CATT;
	};

	case IFRIT:
	{
		[false, "YELLOW", [1.175, -1.5, 0.365]] CATT;
		[true, "RED", [-1.175, -1.5, 0.365]] CATT;
		[false, "RED", [0.4325, -1.5, 0.6275]] CATT;
		[true, "YELLOW", [0.4325, -1.5, 0.6275]] CATT;
		[true, "RED", [-0.2, 1.575, -1.125]] CATT;
		[false, "YELLOW", [0.2, 1.575, -1.125]] CATT;
		[false, "WHITE", [-0.775, 1.475, -1]] CATT;
		[true, "WHITE", [0.775, 1.475, -1]] CATT;
		[true, "RED", [0.525, -4.5, -1.3]] CATT;
		[false, "YELLOW", [-0.525, -4.5, -1.3]] CATT;
		[true, "RED", [-0.4, -4.95, 0.155]] CATT;
		[false, "YELLOW", [0.4, -4.95, 0.155]] CATT;
	};
};

while {(alive _Veh && _Veh GVAR ["lights",false])} do
{
	for [{_i=0}, {_i<_Flashes}, {_i=_i+1}] do
	{
		{ (SEL(_x,0)) SLB _BHigh; } forEach _LLights;
		NAP _FlashOn;
		{ (SEL(_x,0)) SLB _BLow; } forEach _LLights;
		NAP _FlashOff;
	};

	{ (SEL(_x,0)) SLB 0; } forEach _LLights;

	for [{_i=0}, {_i<_Flashes}, {_i=_i+1}] do
	{
		{ (SEL(_x,0)) SLB _BHigh; } forEach _RLights;
		NAP _FlashOn;
		{ (SEL(_x,0)) SLB _BLow; } forEach _RLights;
		NAP _FlashOff;
	};

	{ (SEL(_x,0)) SLB 0; } forEach _RLights;
};

{ DVEH (SEL(_x,0)) } foreach _LLights;
{ DVEH (SEL(_x,0)) } foreach _RLights;

_LLights = [];
_RLights = [];

_Veh SVAR ["lights", false, true];
