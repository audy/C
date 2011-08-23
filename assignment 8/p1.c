#include "p1.h"

struct point changeLocation(struct point p, enum direction d) {
	
	switch (d) {
		case NORTH: p.y++; break;
		case EAST: p.x++; break;
		case SOUTH: p.y--; break;
		case WEST: p.x--; break;
		default: printf("Better re-check your compass!\n)"); break;
	}
	
	return p;
}


