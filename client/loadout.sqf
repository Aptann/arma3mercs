fnc_initLoadout = {

	_uniforms = ["U_IG_Guerilla1_1", "U_IG_leader"];

	removeAllItems _this;
	removeAllAssignedItems _this; 
	removeAllWeapons _this;

	_this addHeadgear "H_MilCap_oucamo";
	_this addVest "V_TacVestCamo_khk";
	_this addUniform (_uniforms call BIS_fnc_selectRandom);
	_this addPrimaryWeaponItem "optic_Aco";
	_this addGoggles "G_Tactical_Black";

};

player call fnc_initLoadout;