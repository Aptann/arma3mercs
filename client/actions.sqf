baseActions = [];
atBase = true;

player addAction ["Select Mission", "client\callAction.sqf", "mission", 0, false, false, "", "atBase && player == missionCoordinator"];
player addAction ["Quartermaster", "client\callAction.sqf", "quartermaster", 0, false, false, "", "atBase && player == quartermaster"];
player addAction ["Cheif Engineer", "client\callAction.sqf", "engineer", 0, false, false, "", "atBase && player == cheifEngineer"];
// player addAction ["Select Mission", "client\callAction.sqf", "mission", 0, false, false, "", "atBase && player == missionCoordinator"];