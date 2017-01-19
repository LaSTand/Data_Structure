#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point
{
	int xpos;
	int ypos;
} Point;

// Set xpos and ypos of Point var
void SetPointPos(Point * ppos, int xpos, int ypos);

// Print xpos and ypos value
void ShowPointPos(Point * ppos);

// Compare xpos and ypos
int PointComp(Point * pos1, Point * pos2); 

#endif