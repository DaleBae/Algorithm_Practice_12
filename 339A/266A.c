#include<stdio.h>

int main(void){
	char str[50]={"0"};
	int n=0,i=0;
	int num=0;

	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%c",&str[i]);
	}

	for(i=0;i<=n;i++){
		if(str[i]==str[i+1]){
			num=num+1;
		}
	}
	printf("%d",num);

	return 0;


}