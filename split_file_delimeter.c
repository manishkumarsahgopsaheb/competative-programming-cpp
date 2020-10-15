
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 250 //every line with end with \n

void parseFile(FILE*,char*);

int main(int argc,char** argv){
	if(argc!=2){
		printf("please provide file name\n");
		exit(1);
	}
	FILE *fptr=fopen(argv[1],"r");
	if(fptr==NULL){
		printf("file does't exit\n");
		exit(1);
	}
	parseFile(fptr,",");
	return 0;
}

void parseFile(FILE *fptr,char* delimiter){
	char buffer[MAXLINE]={0};
	char* linestatus=NULL;
	char *token=NULL;
	while((linestatus=fgets(buffer,MAXLINE,fptr))!=NULL){
		int len=strlen(buffer);
		buffer[len-2]='\0';
		token=strtok(buffer,delimiter);
		while(token!=NULL){
		printf("%s  ",token); //or store 
		token=strtok(NULL,delimiter);
		}
		printf("\n");
	}
}
