#include<stdio.h>
#include<string.h>

void todigit(int arr[100],char str[100]);
void sorting(int n,int arr[10]);
int mylength(char *str);

int main(void){
	char str[100]={"0"};
	int arr[100]={0};
	int i=0,j=0,k=0;
	scanf("%s",str);

	todigit(arr,str);
	
	for(i=0;arr[i]!=0;i++){
		
	}
	sorting(i,arr);

	for(j=0;j<i;j++){
		printf("%d",arr[j]);
		if(arr[j+1]!=0)
			printf("+");
	}

	return 0;


}

int mylength(char *str){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}

void todigit(int arr[100],char str[100]){
	int i=0,j=0;
	for(i=0;i<mylength(str);i++){
		if(str[i]!='+'){
				arr[i/2]=str[i]-48;
				//printf("arr[%d] : %d\n",i/2,arr[i/2]);
		}
	}
}

void sorting(int n,int arr[10]){
	int i=0,j=0;
	int temp=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
