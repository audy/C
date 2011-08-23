// Austin Davis-Richardson
// harekrishna@gmail.com
#ifndef P1_C
#define		P1_C

#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
}; 

enum direction {
	NORTH, SOUTH, EAST, WEST
};

struct point changeLocation(struct point p, enum direction d);

#endif
