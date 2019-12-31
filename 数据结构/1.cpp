#include "daima.h"
#define MAXSIZE 100

typedef struct
{
	int sj;
}Jd;

typedef struct
{
	Jd* elem;
	int length;
}SqList;

Status InitList(SqList& L)//≥ı ºªØ
{
	L.elem = new Jd[MAXSIZE];
	if (!L.elem) exit(OVERFLOW);
	L.length = 0;
	return OK;
}

int LocateElem(SqList L, Jd e)
{
	for (i = 0; i < L.length; i++)
		if (L.elem[i] == e)	return i + 1;
	return  0;
}

int main()
{
	SqList L;
	InitList(L);
	return 0;
}