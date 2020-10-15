#include <stdio.h>

void convertUppertoLower(char *);
int main()
{
	char str[]={'S','U','S','H','E','E','L','\0'};
	convertUppertoLower(str);
	printf("%s\n",str);
	return 0;
}

void convertUppertoLower(char str[]){
	int i=0;
	while(*(str+i)){
	str[i]=str[i]+32;
	i++;
	}
}
	
