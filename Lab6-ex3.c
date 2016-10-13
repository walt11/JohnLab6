#include <stdio.h>

// the factorial did not have a base case to stop the infinite recursion
int factorial ( int num )
{
	if(num > 1){
    	return num * factorial( num - 1 );
	}else{
		return 1;
	}
}

int main(void)
{
    int no,ans;
    printf("Enter the number \n");
    scanf( "%d", &no );
    ans = factorial( no );
    printf("The factorial is %d \n", ans );
    return 0;
}
