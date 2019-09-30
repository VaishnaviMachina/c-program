#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

int gvar=555;
int main()
{
	int lvar=54;
	int cpid=fork();
	if (cpid==0)
	printf("i am child process with pid=%ld, gvar=%d lvar=%d \n",(long)getpid(),gvar,lvar);
	else
	printf("i am parent process with pid=%ld, gvar=%d lvar=%d \n",(long)getpid(),gvar,lvar);


}
