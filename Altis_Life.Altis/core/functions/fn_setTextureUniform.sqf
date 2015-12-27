#include <macro.h>
/*
    File: fn_setTextureUniform.sqf
    Author: noms
    Edited: Itsyuka

    Description:
    Sets the textures for each side, level and uniform.
*/

/*

// Original (Vanilla) medic uniform check
if(playerSide == independent && {EQUAL(uniform player,"U_Rangemaster")}) then {
	[player,0,"textures\medic_uniform.jpg"] remoteExecCall ["life_fnc_setTexture",RCLIENT];
};
*/


// Check the playerSide
switch(playerSide) do {

  // If they're medic...
  case independent:
  {
    // If they're wearing Combat Fatigues [AAF]
    if(EQUAL(uniform player,"U_I_CombatUniform")) then {
      // Set the medic texture.
      [player,0,"textures\medic\uniform\ems_uni_survival.paa"] remoteExecCall ["life_fnc_setTexture",RCLIENT];
    };
  };




};
