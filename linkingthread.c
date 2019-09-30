#include <stdio.h>  
#include <unistd.h> 
#include<stdlib.h>
#include<errno.h>
#include<pthread.h>
#include<math.h>
#include<string.h>
void *f1(void *);
int main(int argc, char* argv[]){
char* msg[]={"Thread1","Thread2","Thread3","Thread4","Thread5"};
pthread_t tids[5];
for(int i=0;i<5;i++)
{
pthread_create(&tids[i],NULL,f1,(void*)msg[i]);
pthread_join(tids[i],NULL);
}
sleep(1000);
printf("main(): childs terminated\n");
exit(0);
}

void *f1(void *arg)
{
printf("I am child %s\n",(char*)arg);

return 0;
}
