#include "p2.h"

int getTheArea(struct rectangle r) {

	return (r.upper_left.y-r.lower_right.y)*(r.lower_right.x-r.upper_left.x);
	
}

struct point getTheCenter(struct rectangle r) {
	
	struct point q;
	q.x = (r.lower_right.x-r.upper_left.x)/2 + r.upper_left.x;
	q.y = (r.upper_left.y-r.lower_right.y)/2 + r.lower_right.y;
	return q;
	
	
}

struct rectangle shiftTheRectangle(struct rectangle r, int x, int y) {
	struct rectangle s;
	s.upper_left.x = r.upper_left.x + x;
	s.upper_left.y = r.upper_left.y + y;
	s.lower_right.x = r.lower_right.x + x;
	s.lower_right.y = r.lower_right.y + y;
	return s;
}

int isItInYou(struct rectangle r, struct point p) {
	
	if (
		(p.x > r.upper_left.x) &&
		(p.y < r.upper_left.y) &&
		(p.x < r.lower_right.x) &&
		(p.y > r.lower_right.y)
		) { return 1; }
	
	return 0;
	
}

