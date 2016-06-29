#include "linktype.h"

typedef struct tagListNode
{
	void *pkey;
	struct tagListNode * prev;
	struct tagListNode * next;
}stListNode;

typedef struct tagComListNode
{
	unsigned int eleSize;
	int (*com)
}
/* function: create list node
 * input : void *pKey ;
 *         int sizeKey
 * output :Node Point
 * 
 */
stListNode *createLiskNode(void * pKey,int sizeKey);

/*
 * 
 * */
void freeListNode (stListNode *pNeedToFree ,void( * proc )(void *) );







