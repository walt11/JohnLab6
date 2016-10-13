#include <stdio.h>
 
int main()
{
    char fileName[20]; //filename was not initialized with some memory
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName); //do not need the & sign with strings
 

    FILE* file1 = fopen(fileName, "a+");
 
    char c;
    while ((c=getchar()) != EOF)
    {
        fprintf(file1,"%c", c); //forgot the %c for fprintf and removed the & sign infront of the c
    }
 
    fclose(file1);
 
    printf("CTRL+d is a correct ending\n");
 
    return 0;
}
