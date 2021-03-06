#ifndef _MAP_DEF_
#define _MAP_DEF_

#define WIDTH 8
#define HEIGHT 8

#define NUM_DIRECTIONS 4

// offset: x, y
static int DIRECTION_OFFSETS[NUM_DIRECTIONS][2] = {
	{0, -1},	// up
	{1, 0},		// right
	{0, 1},		// down
	{-1, 0}		// left
};

enum PosStatus {
	NOT_VISIT = 0,
	WALL = 1,
	VISIT = 2
};

typedef struct MapPositionType {
	int x;
	int y;
	int direction;
} MapPosition;

#endif