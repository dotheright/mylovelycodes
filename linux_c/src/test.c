#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct foobar{
unsigned int foo;
char *pstr;
char bar;
char boo;
};

int main(int argc, char** argv)
{

    struct foobar tmp;
    memset(&tmp,0,sizeof(tmp));
    tmp.pstr =(char *)malloc(100*sizeof(char));
    if(NULL == tmp.pstr)
    {
        assert(0);
        return -1;
    }

	printf("address of &tmp is= %p\n\n", &tmp);
    printf("address of tmp->foo= %p \t offset of tmp->foo= %lu\n", &tmp.foo, (unsigned long) &((struct foobar *)0)->foo);
    printf("address of tmp->foo= %p \t offset of tmp->foo= %lu\n", &tmp.pstr, (unsigned long) &((struct foobar *)0)->pstr);
    printf("address of tmp->bar= %p \t offset of tmp->bar= %lu\n", &tmp.bar, (unsigned long) &((struct foobar *)0)->bar);
    printf("address of tmp->boo= %p \t offset of tmp->boo= %lu\n\n", &tmp.boo, (unsigned long) &((struct foobar *)0)->boo);

    printf("computed address of &tmp using:\n");
    printf("\taddress and offset of tmp->foo= %p\n",
    (struct foobar *) (((char *) &tmp.foo) - ((unsigned long) &((struct foobar *)0)->foo)));
    printf("\taddress and offset of tmp->bar= %p\n",
    (struct foobar *) (((char *) &tmp.bar) - ((unsigned long) &((struct foobar *)0)->bar)));
    printf("\taddress and offset of tmp->boo= %p\n",
    (struct foobar *) (((char *) &tmp.boo) - ((unsigned long) &((struct foobar *)0)->boo)));
    
    free(tmp.pstr);
    return 0;
}
