#include <stdio.h>
// added the library to include malloc
#include <stdlib.h>
int main(void) 
{
	char *ch;
	// removed the * infront of ch
	ch=malloc(sizeof(char)*2);    
	ch[1]='3';
	ch[2]='a';
	while (ch[1] > '0') 
	{
		printf("Character: %c and %c\n", ch[1], ch[2]);
		ch[1]--;
	}
	printf(" main:%p\n ch:%p\n ch+1:%p\n ch+2:%p\n ",&main,ch,ch+1,ch+2);
	return ch[1];
}

