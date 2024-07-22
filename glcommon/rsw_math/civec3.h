#ifndef CIVEC3_H
#define CIVEC3_H

#include <stdio.h>

typedef struct ivec3
{
	int x;
	int y;
	int z;
} ivec3;

inline ivec3 make_ivec3(int x, int y, int z)
{
	ivec3 v = { x, y, z };
	return v;
}

inline void fprint_ivec3(FILE* f, ivec3 v, const char* append)
{
	fprintf(f, "(%d, %d, %d)%s", v.x, v.y, v.z, append);
}

inline int fread_ivec3(FILE* f, ivec3* v)
{
	int tmp = fscanf(f, " (%d, %d, %d)", &v->x, &v->y, &v->z);
	return (tmp == 3);
}


#endif
