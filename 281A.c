#include<stdio.h>

int main(void){
	char str[1000]={"0"};
	int i=0,j=0;

	scanf("%s",str);

	if(str[0]>=97 && str[0]<=122)
		str[0]=str[0]-32;

	printf("%s",str);

	return 0;
}