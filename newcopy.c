#include <stdio.h> 
#include<stdlib.h>
extern char **environ;

int main()
{
	printf("\n environment variable passed are\n");
	for (int i=0;environ[i]!=NULL;i++)
	printf("environ[%d]:%s",i,environ[i]);

 	return 0;
}
