#include<stdio.h>
#include<malloc.h>
void main()
{
    char *a = "hey";
    // trying to free a pointer that has not been malloc'd
    //free(a);
    a = "hello";   
    printf("%s",a);
}
