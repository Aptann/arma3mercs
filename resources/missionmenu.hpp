#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class MissionDialog
{
	idd = -1;
	movingEnable = true;
	//onLoad = "uiNamespace setVariable ['EquipmentDialog', _this select 0];"; 

	controls[]=
	{
		IGUIBack_2200,
		RscFrame_1800,
		RscListbox_1500,
		RscStructuredText_1100,
		RscButton_1600,
		RscButton_1601
	};

	class IGUIBack_2200: IGUIBack
	{
		idc = 2200;
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 25 * GUI_GRID_H;
		colorBackground[] = {-1,-1,-1,0.5};
	};
	class RscFrame_1800: RscFrame
	{
		idc = 1800;
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 25 * GUI_GRID_H;
	};
	class RscListbox_1500: RscListbox
	{
		idc = 1500;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 12 * GUI_GRID_W;
		h = 22 * GUI_GRID_H;
	};
	class RscStructuredText_1100: RscStructuredText
	{
		idc = 1100;
		x = 13 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 26.5 * GUI_GRID_W;
		h = 22 * GUI_GRID_H;
		colorBackground[] = {0,0,0,0.3};
	};
	class RscButton_1600: RscButton
	{
		idc = 1600;
		text = "OK"; //--- ToDo: Localize;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 7.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class RscButton_1601: RscButton
	{
		idc = 1601;
		text = "Cancel"; //--- ToDo: Localize;
		x = 8.5 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 7.5 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};

};
