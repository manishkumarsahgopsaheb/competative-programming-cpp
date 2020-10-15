#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct random_string{
	char* string;
	int length;
};

struct random_string*  give_random_string(int minlen,int maxlen,int total_string){
	struct random_string *mystring=(struct random_string *)malloc(sizeof(struct random_string)*total_string);
	int my_prime=723523;
	srand(time(NULL));
	for(int i=0;i<total_string;i++){
		int len=1+(rand()%my_prime)%maxlen;
		if(len<minlen)
			len=1+minlen; 
		(mystring+i)->string=(char *)malloc(sizeof(char)*len);
		(mystring+i)->length=len;
	}
	srand(time(NULL));
	char *string="qMwNeBrVtCyCuXiZoApSlDkFjGhHgJf1K2d5L6s7P8a9O0zIxUcY0vTbRnEmWQ";
	int rlen=strlen(string);
	int j;
	for(int i=0;i<total_string;i++){
		for(j=0;j<(mystring+i)->length-1;j++)
			(mystring+i)->string[j]=string[rand()%rlen];
		(mystring+i)->string[j]='\0';
	}
	return mystring;
}
int main(){
	struct random_string *my_random_string=give_random_string(8,32,256);
	for(int i=0;i<256;i++){
		printf("String is %s\n",(my_random_string+i)->string);
		printf("String length is %d\n",(my_random_string+i)->length);
	}
	return 0;
}	
