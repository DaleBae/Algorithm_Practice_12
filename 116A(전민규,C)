#include<stdio.h>

int main(void){
	int arr[1000]={0};
	int n=0,a=0,b=0;
	int i=0,j=0;
	int max=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		arr[i+1]=arr[i]+(-1*a)+b;
	}

	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}

	printf("%d",max);
}

