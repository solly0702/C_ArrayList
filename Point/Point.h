//
//  Point.h
//  Array_List
//
//  Created by Han Sol Lee on 9/14/16.
//  Copyright © 2016 Solly. All rights reserved.
//

#ifndef Point_h
#define Point_h

typedef struct _point {
    int xpos;
    int ypos;
} Point;

// list of function for Point

void SetPointPos(Point * ppos, int xpos, int ypos);

void ShowPointPos(Point *ppos);

// compare position of point
// if only xpos the same return 1
// if only ypos the same return 2
// if all pos the same return 0
// if non of the same return -1
int CompPoint(Point *pos1, Point *pos2);

#endif /* Point_h */
