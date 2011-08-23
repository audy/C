// Austin Davis-Richardson
// harekrishna@gmail.com

#include "p1.h"


int main(void) {
	int i;
	struct point p = {1,2};
	enum direction d = WEST;
	
	printf("Point = (%d,%d)\n",p.x,p.y);
	printf("Direction = %d (0=NORTH,1=EAST,2=SOUTH,3=WEST)\n",d);
	
	p = changeLocation(p,d);
	
	printf("Point moved to (%d,%d)\n",p.x,p.y);
	
	return 0;
	
}