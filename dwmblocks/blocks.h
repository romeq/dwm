//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"  ",     "~/scripts/bar_wifi.sh", 2,0}, 
    {" ",       "~/scripts/bar_vpn.sh", 2, 0},
    {" ",       "~/scripts/bar_mem.sh", 2, 0},
    {" ",    "~/scripts/bar_volume.sh", 1, 0},
    {" ",   "/usr/local/bin/weather espoo", 300, 0},
    {"",            "date \"+%d.%m.%Y %H:%M\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 10;
