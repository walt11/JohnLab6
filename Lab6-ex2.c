#include <stdio.h>
void main()
{
    char p[] = "Mizzou"; //p is declared as a constant char * and therefore cannot be changed
    p[3] = 'P';
    printf("%s\n",p);
}
