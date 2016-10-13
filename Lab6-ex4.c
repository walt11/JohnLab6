 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    // because arr2 is declared bigger than arr1, there is some conflicting 
    // memory issues - changing the size fixes the issue
    char arr1[ 15 ] = "Trumantiger";
    char arr2[ 15 ];
    while(i<15){
        arr2[ i ] = 'A';
	i++;
    }
    strcpy( arr1 , arr2 );
    printf("%s\n",arr1);
}
