#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element
{
    int val;
    struct element *nxt;
};

typedef element* llist;

int main()
{
    printf("Hello world!\n");
    return 0;
}
