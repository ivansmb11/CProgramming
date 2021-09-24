#include <stdio.h>

#define LINUX

int main()
{
    #ifdef LINUX
    printf("Linux function calls go here. \n");
    #endif

    printf("Hello World. \n");

    return 0;
}