#include <stdio.h>

typedef struct tagListNode
{
	void *pkey;
	struct tagListNode * prev;
	struct tagListNode * next;
}stListNode;

