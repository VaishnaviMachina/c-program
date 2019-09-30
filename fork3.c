#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main()
{
	int i,cpid;
	static  ctr=0;
	cpid=fork();
	if(cpid==0){
		
		for(i=0;i<3;i++)
		printf("child counter is %d\n",ctr++);}
	else
	{
		for(i=0;i<3;i++)
		printf("child counter is %d\n",ctr++);

	}
	return 0;

}

