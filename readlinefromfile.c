#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 250
int main(int argc,char** argv)
{
	if(argc!=2){
	fprintf(stderr,"provide file name");
	exit(1);
	}
	FILE *fptr=fopen(argv[1],"r");
	char buffer[MAXLINE];
	if(fptr==NULL){
		fprintf(stderr,"Unable to Open File");
		exit(1);
	}
	char *status=fgets(buffer,MAXLINE,fptr);
	if(status!=NULL)
	printf("%s\n",buffer);
	else
	fprintf(stderr,"Error in reading file\n");
	fclose(fptr);
	return 0;
}
