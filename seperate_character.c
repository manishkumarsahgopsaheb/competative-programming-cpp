#include <stdio.h>

int main(int argc,char** argv){
	char string[6];
	for(int i=0;i<5;i++)
	{
		string[i]=getchar();
		getchar();
	}
	string[5]='\0';
	printf("%s\n",string);
	return 0;
}
