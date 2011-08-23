// AGDR


// Structures
struct point { int x, y; };

struct rectangle { struct point upper_left, lower_right;};


// Functions
int getTheArea(struct rectangle r);

struct point getTheCenter(struct rectangle r);

struct rectangle shiftTheRectangle(struct rectangle r, int x, int y);

int isItInYou(struct rectangle r, struct point p);


