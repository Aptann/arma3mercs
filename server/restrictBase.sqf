fnc_getPlayers = {
	
	private["_out", "_players"];

	_players = AllUnits;
	{ 
			
		if ((!isPlayer _x) or (!alive _x)) then { 
					
			_players = _players - [_x]; 
					
		}; 
				
	} forEach _players;

	_out = _players;
	_out;

};

while {true} do {
	
	_basePos = getMarkerPos "baseCenter";

	{

		if ( ((getPos _x) distance _basePos) > 80 ) then {

			_x setDammage 1;

		};

	} forEach ([] call fnc_getPlayers);

};