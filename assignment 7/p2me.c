#include <stdio.h>
#include "p2.h"

int main(void) {
	
	struct rectangle r;
	r.upper_left.x = 1;
	r.upper_left.y = 9;
	r.lower_right.x = 9;
	r.lower_right.y = 1;
	
	struct point p;
	p.x = 2;
	p.y = 2;
	
	printf("Is it in you?: %d\n",isItInYou(r,p));
	
	
	printf("Rectangle: (%d,%d)(%d,%d)\n",r.upper_left.x,r.upper_left.y,r.lower_right.x,r.lower_right.y);

	printf("Area = %d\n",getTheArea(r));
	
	r = shiftTheRectangle(r,2,2);
	
	printf("Rectangle: (%d,%d)(%d,%d)\n",r.upper_left.x,r.upper_left.y,r.lower_right.x,r.lower_right.y);
	
	p = getTheCenter(r);
	
	printf("The (truncated) Center is: (%d,%d)\n",p.x,p.y);
	
	return 0;

}
