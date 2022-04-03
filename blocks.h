//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "amixer get Master | awk '$0~/%/{print $4}' | tr -d '[]%'",		0,		10},

	{"", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g", 	30,		0},

	{"", "acpi | awk '{print $4}' | sed s/,//", 					5,		0},

	{"", "date '+%T'", 		1,		0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
