fnc_initLoadout = {

	removeAllItems _this;
	removeAllAssignedItems _this; 
	removeAllWeapons _this;

	_this addHeadgear "H_MilCap_oucamo";
	_this addVest "V_TacVestCamo_khk";
	_this addPrimaryWeaponItem "optic_Aco";
	_this addGoggles "G_Tactical_Black";

	if(_this == missionCoordinator) then {
		_this addUniform "U_I_G_Story_Protagonist_F";
		_this addHeadgear "H_MilCap_blue";
	};

	if(_this == cheifEngineer) then {
		_this addUniform "U_C_WorkerCoveralls";
		_this addHeadgear "H_Cap_headphones";
	};

	if(_this == quartermaster) then {
		_this addUniform "U_OG_Guerilla2_3";
		_this addHeadgear "H_Cap_blk";
	};
};

player call fnc_initLoadout;