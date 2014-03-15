T_INIT = false;
[] execVM "shared\playerstate.sqf";
waitUntil { T_INIT };

_sharedExecuted = false;
if(T_SERVER) then {
	[] execVM "sv_init.sqf";
	[] execVM "sh_init.sqf";
	_sharedExecuted = true;
};

if(T_CLIENT) then {
	[] execVM "cl_init.sqf";
	if(!_sharedExecuted) then {
		[] execVM "sh_init.sqf";
	};
};

/* skuli was here */