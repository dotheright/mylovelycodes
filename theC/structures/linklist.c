#include "linktype.h"

typedef struct tagListNode
{
	void *pkey;
	struct tagListNode * prev;
	struct tagListNode * next;
}stListNode;

/* function: create list node
 * input : void *pKey ;
 *         int sizeKey
 * output :Node Point
 * 
 */
stListNode *createLiskNode(void * pKey,int sizeKey)
{
	;
}
