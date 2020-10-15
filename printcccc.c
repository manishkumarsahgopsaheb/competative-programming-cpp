#include <stdio.h>


int main(int argc,char** argv,char** env){
	int factor=7;
	for(unsigned int i=1; i<=22; ++i){
		if((factor-i)==0 && factor<=16){
		printf(" ");
		factor+=3;
		}
		else
		printf("C");
	}
	printf("\n");
	return 0;
}
