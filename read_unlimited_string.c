#include <stdio.h>

int main(){
	char *buff=NULL;
	printf("Enter string \n");
	scanf("%m[^\n]",&buff);
	printf("%s\n",buff);
	return 0;
}
