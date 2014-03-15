//--- equipmentdialog
#define IDC_EQUIPMENTDIALOG_RSCTEXT_1000		12157
#define IDC_EQUIPMENTDIALOG_RSCTEXT_1001		12158
#define IDC_EQUIPMENTDIALOG_RSCSTRUCTUREDTEXT_1100	12257
#define IDC_EQUIPMENTDIALOG_RSCPICTURE_1200		12357
#define IDC_EQUIPMENTDIALOG_RSCLISTBOX_1500		12657
#define IDC_EQUIPMENTDIALOG_RSCBUTTON_1600		12757
#define IDC_EQUIPMENTDIALOG_RSCBUTTON_1601		12758
#define IDC_EQUIPMENTDIALOG_IGUIBACK_2200		13357
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)


class EquipmentDialog
{
	idd = -1;
	movingEnable = true;
	//onLoad = "uiNamespace setVariable ['EquipmentDialog', _this select 0];"; 

	controls[]=
	{
		IGUIBack_2200,
		RscButton_1600,
		RscButton_1601,
		RscListbox_1500,
		RscPicture_1200,
		RscText_1000,
		RscText_1001,
		RscStructuredText_1100
	};

	class IGUIBack_2200: IGUIBack
	{
		idc = 2200;
		x = 0 * GUI_GRID_W + GUI_GRID_X;
		y = 0 * GUI_GRID_H + GUI_GRID_Y;
		w = 40 * GUI_GRID_W;
		h = 25 * GUI_GRID_H;
		colorBackground[] = {0,0,0,0.3};
		
	};
	class RscButton_1600: RscButton
	{
		idc = 1600;
		text = "Buy"; //--- ToDo: Localize;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 4 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class RscButton_1601: RscButton
	{
		idc = 1601;
		text = "Cancel"; //--- ToDo: Localize;
		x = 5 * GUI_GRID_W + GUI_GRID_X;
		y = 23 * GUI_GRID_H + GUI_GRID_Y;
		w = 8 * GUI_GRID_W;
		h = 1.5 * GUI_GRID_H;
	};
	class RscListbox_1500: RscListbox
	{
		idc = 1500;
		x = 0.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 12.5 * GUI_GRID_W;
		h = 22 * GUI_GRID_H;
	};
	class RscPicture_1200: RscPicture
	{
		idc = 1200;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 26 * GUI_GRID_W;
		h = 9.5 * GUI_GRID_H;
	};
	class RscText_1000: RscText
	{
		idc = 1000;
		text = "Cost: â‚¬100"; //--- ToDo: Localize;
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 26 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		sizeEx = 1.2 * GUI_GRID_H;
	};
	class RscText_1001: RscText
	{
		idc = 1001;
		text = "Requirements: None"; //--- ToDo: Localize;
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 12 * GUI_GRID_H + GUI_GRID_Y;
		w = 26 * GUI_GRID_W;
		h = 1 * GUI_GRID_H;
		sizeEx = 1.2 * GUI_GRID_H;
	};
	class RscStructuredText_1100: RscStructuredText
	{
		idc = 1100;
		text = "Description"; //--- ToDo: Localize;
		x = 13.5 * GUI_GRID_W + GUI_GRID_X;
		y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
		w = 26 * GUI_GRID_W;
		h = 11 * GUI_GRID_H;
		colorBackground[] = {0,0,0,0.3};
	};
};
