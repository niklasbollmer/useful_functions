/*
	[--- Useful SA:MP functions ---]
	
	GITHUB: https://github.com/niklasbollmer/useful_functions
*/

#include <a_samp>

// IsPlayerInWater ~ return: 0, 1 \\
stock IsPlayerInWater(playerid) {
    new vars[10][2];
    GetAnimationName(GetPlayerAnimationIndex(playerid), vars[0], sizeof(vars[0]), vars[1], sizeof(vars[1]));
    return (!strcmp(vars[0], "SWIM")) ? 1 : 0;
}
stock IsPlayerSwimming(playerid)
	return IsPlayerInWater(playerid);