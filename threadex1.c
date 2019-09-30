#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
int g=0;
void *myThreadFun(void *vargp)
{
	int *myid=(int *)vargp;
	static int s=0;
	++s;
	++g;
	sleep(3000);
	printf("thread id=%d, global=%d,static=%d\n",*myid,++g,++s);
	
}
int main()
{
	int i;
	pthread_t tid;
	for(i=0;i<10;i++)
	pthread_create(&tid,NULL,myThreadFun,(void*)&tid);
	
	pthread_exit(NULL);
	return(0);
}
