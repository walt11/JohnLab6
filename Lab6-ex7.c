#include<stdio.h>
int main()
{
	int x=1309;
	int *p = NULL;
	// assigned the pointer to the memory address of x
	p = &x;
	printf("\n The value of x is = %d",x);
	// the pointer was not pointing to anything and therefore did not have a value to point to
	printf("\n The pointer points to the value = %d\n",*p);
	return 1;
}
