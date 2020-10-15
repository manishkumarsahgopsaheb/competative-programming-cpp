#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int shared_data=0;
pthread_mutex_t lock;

void* mythread(void *args){
	unsigned int factor=*(unsigned int *)args;
	pthread_mutex_lock(&lock);
	for(unsigned int i=0;i<10;i++){
	shared_data+=factor;
	sleep(1); //for give chance to other thread 
	}
	printf("%d\n",shared_data);
	pthread_mutex_unlock(&lock);
}

int main(int argc,char** argv){
	pthread_t thread1;
	pthread_t thread2;
	int factor1=2;
	int factor2=-1;
	if(pthread_mutex_init(&lock,NULL)!=0){
	printf("Mutex initialization is fail\n");
	exit(1);
	}
	pthread_create(&thread1,NULL,&mythread,&factor1);
	pthread_create(&thread2,NULL,&mythread,&factor2);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	pthread_mutex_destroy(&lock);
	return 0;
}
