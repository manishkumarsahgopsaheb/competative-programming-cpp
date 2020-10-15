#include <stdio.h>

void function(int* ,int*);

int main(int argc,char** argv){
	int a=12;
	int b=13;
	printf("a= %d, b= %d\n",a,b);
	function(&a,&b);
	printf("a= %d, b= %d\n",a,b);
	return 0;
}

void function(int* a,int* b){
	*a=121;
	*b=131;
}
