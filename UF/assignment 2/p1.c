#include <stdio.h>

int main(void)
{
	int input,days,hours,minutes,seconds;
	printf("Enter in the number of seconds until the coin toss: ");
	scanf("%d",&input);
	days = input/86400; // how many days
	hours = input/3600-days*24; // total hours days (in hours)
	minutes = input/60-days*1440-hours*60; // total minutes - days (in minutes) - hours (in minutes)
	seconds = input-minutes*60-days*86400-hours*3600; // total seconds - days (in seconds) - hours (in seconds) - minutes (in seconds)
	printf("%d Days %d Hours %d Minutes %d Seconds remaining until coin toss.\n",days,hours,minutes,seconds);
	
	return 0;
}


