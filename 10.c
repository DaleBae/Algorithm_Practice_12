#include<stdio.h>
#include<string.h>

void tolow(char str[100]);
int mycompare(char str1[100],char str2[100]);

int main(void){

	char str1[100]={"0"};
	char str2[100]={"0"};
	int a=0;

	scanf("%s",str1);
	scanf("%s",str2);

	tolow(str1);
	tolow(str2);

	printf("%d",mycompare(str1,str2));

	return 0;
}

void tolow(char str[100]){
	int i=0;

	for(i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90)
			str[i]=str[i]+32;
	}
}

int mycompare(char str1[100],char str2[100]){
	int i=0;
	int n=0;

	for(i=0;i<strlen(str1);i++){
		if(str1[i]>str2[i]){
			n=1;
			break;
		}
		else if(str1[i]<str2[i]){
			n=-1;
			break;
		}

	}

	if(n>0)
		return 1;
	else if(n<0)
		return -1;
	else
		return 0;
}