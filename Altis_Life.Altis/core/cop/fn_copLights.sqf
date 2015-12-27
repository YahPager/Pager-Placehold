#include <macro.h>
/*
██████████File: fn_copLights.sqf████████████
████Author: [RGN] Pager & [GSN] Paronity████
████████Website: recklessgaming.com█████████
██████████Date Created: 2.24.2015███████████
███████Date Modified: 12.25.2015 v2.3███████
*/

private ["_Veh","_CRed","_CWhite","_CBlue","_LightsOn","_BHigh","_BLow","_Attach","_LLights","_RLights","_Type","_Att","_Inty"];

_Veh = SEL(_this,0);
_Type = typeOf _Veh;

if (isNil "_Veh" || isNull _Veh || !(_Veh GVAR ["lights", false])) exitWith {};

_Veh SVAR ["lights", true, false];

_CRed = [255, 0, 0];
_CWhite = [255, 255, 255];
_CBlue = [0, 0, 255];

if (sunOrMoon < 1) then
{//Night
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

_Flashes = 3;
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
		case "BLUE": { _Light SLC _CBlue; };
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
		[false, "RED", [-0.44, 0, 0.525]] CATT;
		[true, "BLUE", [0.345, 0, 0.525]] CATT;
		[false, "RED", [0.575, -2.95, -0.77]] CATT;
		[true, "BLUE", [-0.645, -2.95, -0.77]] CATT;
		[false, "RED", [-0.905, -2.875, -0.225]] CATT;
		[true, "RED", [0.825, -2.875, -0.225]] CATT;
		[false, "WHITE", [0.61, 2.2825, -0.355]] CATT;
		[true, "WHITE", [-0.695, 2.2825, -0.355]] CATT;
	};

	case BG_OFFROAD:
	{
		[false, "RED", [0.575, -2.95, -0.77]] CATT;
		[true, "BLUE", [-0.645, -2.95, -0.77]] CATT;
		[false, "RED", [-0.905, -2.875, -0.225]] CATT;
		[true, "RED", [0.825, -2.875, -0.225]] CATT;
		[true, "BLUE", [0.61, 2.2825, -0.355]] CATT;
		[false, "RED", [-0.695, 2.2825, -0.355]] CATT;
	};

	case SUV:
	{
		[true, "RED", [-0.39, 2.28, -0.52]] CATT;
		[false, "BLUE", [0.38, 2.28, -0.52]] CATT;
		[true, "RED", [-0.86, -2.75, -0.18]] CATT;
		[true, "RED", [0.86, -2.75, -0.18]] CATT;
		[false, "BLUE", [-0.6, -2.925, -0.24]] CATT;
		[false, "BLUE", [0.59, -2.925, -0.24]] CATT;
		[true, "WHITE", [0.8, 1.95, -0.48]] CATT;
		[false, "WHITE", [-0.8, 1.95, -0.48]] CATT;
	};

	case HATCH:
	{
		[false, "BLUE", [-0.03, 0, 0.2]] CATT;
		[true, "BLUE", [-0.03, 0, 0.2]] CATT;
		[false, "BLUE", [-0.8, -2.25, -0.3]] CATT;
		[true, "BLUE", [0.78, -2.25, -0.3]] CATT;
		[false, "WHITE", [0.75, 1.615, -0.52]] CATT;
		[true, "WHITE", [-0.8, 1.615, -0.525]] CATT;
	};

	case SPORT:
	{
		[false, "RED", [-0.03, 0, 0.2]] CATT;
		[true, "BLUE", [-0.03, 0, 0.2]] CATT;
		[false, "RED", [-0.8, -2.25, -0.3]] CATT;
		[true, "BLUE", [0.78, -2.25, -0.3]] CATT;
		[false, "WHITE", [0.75, 1.615, -0.52]] CATT;
		[true, "WHITE", [-0.8, 1.615, -0.525]] CATT;
	};

	case HUNTER:
	{
		[false, "RED", [-0.85, -0.9, 0.6]] CATT;
		[true, "BLUE", [0.85, -0.9, 0.6]] CATT;
		[true, "RED", [-0.93, -2.8, 0.6]] CATT;
		[false, "BLUE", [0.93, -2.8, 0.6]] CATT;
		[true, "WHITE", [-0.85, 1.475, -0.75]] CATT;
		[false, "WHITE", [0.85, 1.475, -0.75]] CATT;
	};

	case IFRIT:
	{
		[false, "BLUE", [1.175, -1.5, 0.365]] CATT;
		[true, "RED", [-1.175, -1.5, 0.365]] CATT;
		[false, "RED", [0.4325, -1.5, 0.6275]] CATT;
		[true, "BLUE", [0.4325, -1.5, 0.6275]] CATT;
		[true, "RED", [-0.2, 1.575, -1.125]] CATT;
		[false, "BLUE", [0.2, 1.575, -1.125]] CATT;
		[false, "WHITE", [-0.775, 1.475, -1]] CATT;
		[true, "WHITE", [0.775, 1.475, -1]] CATT;
		[true, "RED", [0.525, -4.5, -1.3]] CATT;
		[false, "BLUE", [-0.525, -4.5, -1.3]] CATT;
		[true, "RED", [-0.4, -4.95, 0.155]] CATT;
		[false, "BLUE", [0.4, -4.95, 0.155]] CATT;
	};
};

while {(alive _Veh || _Veh GVAR ["lights",false])} do
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
