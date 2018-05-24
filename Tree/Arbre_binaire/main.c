#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false,
    true
} Bool;

typedef struct StackElement
{
    int value;
    struct StackElement *next;
}StackElement , *Stack;

int main()
{
    return 0;
}
