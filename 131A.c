#include <stdio.h>
#include<string.h>

int main(void){
	char str[100]={"0"};
	char str_2[100]={"0"};
	int i=0,j=0,n=0;

	scanf("%s",str);

	while(n<=strlen(str)){
		for(i=0;i<strlen(str);i++){
			if(str[i]>=65 && str[i]<=90)
				n++;
		}
		if(n==strlen(str)){
			for(i=0;i<strlen(str);i++){
				str[i]=str[i]+32;
			}
			break;
		} //���� 1

		n=0;
		for(i=0;i<strlen(str)-1;i++){
			if(str[0]>=97 && str[0]<=122 && str[i+1]>=65 && str[i+1]<=90){
				n++;
			}
		}

		if(n==strlen(str)-1){		
				str[0]=str[0]-32;
				for(i=0;i<strlen(str)-1;i++)
					str[i+1]=str[i+1]+32;
		}
		break;
	}
	printf("%s",str);
	
	return 0;
}