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
	int n=atoi(argv[1]);
	int i;
	for(i=1;i<=n;i++)
	if(fork()!=0)
	break;
	fprintf(stderr,"ppid=%ld pid=%d",(long)getpid(),(long)getpid());
while(1);
	exit(0);
}

