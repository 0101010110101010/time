#include <stdio.h>
#include <time.h>

int strtotime(char datetime[])
{	
	struct tm tm_time;
	int unixtime;
	strptime(datetime, "%Y-%m-%d %H:%M:%S", &tm_time); 
	unixtime = mktime(&tm_time);return unixtime;
}
