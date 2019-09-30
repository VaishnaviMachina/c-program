#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include<stdlib.h>
int main(int argc, char*argv[])
{
	if(argc!=2){
	fprintf(stderr,"incorrcect no of arguments , pass one integer\n");
	exit(1);
	}
	pid_t cpid;
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
	fork();
	sleep(1000);
	fprintf(stderr,"ppid=%ld ppid=%d\n",(long)getpid(),(long)getppid());
	while(1);
	exit(0);
}

