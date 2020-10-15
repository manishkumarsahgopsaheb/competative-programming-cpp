// gcc version 7.3.0 (Ubuntu 7.3.0-16ubuntu3) 

#include <stdio.h>

#define MAXSIZE 10000

void reverse(int*);
void print(int*);

int main(int argc,char** argv){
	int n,array[MAXSIZE];
	printf("Enter size of array\n");
	scanf("%d",&n);
	array[0]=n;
	printf("Enter %d elements\n",n);
	for(int i=1;i<=n;i++)
	scanf("%d",&array[i]);
	printf("Before Reverse\n");
	print(array);
	reverse(array);
	printf("After Reverse\n");
	print(array);
	return 0;
}

void print(int* array)
{
	int size=array[0];
	for(int i=1;i<=size;i++)
	printf("%d ",array[i]);
	printf("\n");
}

void reverse(int* array)
{
	int size=array[0];
	for(int i=1,j=size;i<j;i++,j--){
		int temp=array[i];
		array[i]=array[j];
		array[j]=temp;
	}
}
	
