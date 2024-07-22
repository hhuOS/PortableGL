#ifndef CIVEC2_H
#define CIVEC2_H

#include <stdio.h>

typedef struct ivec2
{
	int x;
	int y;
} ivec2;

inline ivec2 make_ivec2(int x, int y)
{
	ivec2 v = { x, y };
	return v;
}

inline void fprint_ivec2(FILE* f, ivec2 v, const char* append)
{
	fprintf(f, "(%d, %d)%s", v.x, v.y, append);
}

inline int fread_ivec2(FILE* f, ivec2* v)
{
	int tmp = fscanf(f, " (%d, %d)", &v->x, &v->y);
	return (tmp == 2);
}


#endif
