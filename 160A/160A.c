#include<stdio.h>

void sort(int arr[],int n);

int main(void){
	int a=0,n=0,i=0,j=0,num=0,sum=0;
	int arr[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	sort(arr,n);

	for(i=0;i<n;i++){
		if(num<=sum-num)
			num+=arr[i];
		else
			break;
	}
	printf("%d",i);
}

void sort(int arr[],int n){
	int i=0,j=0;
	int temp=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]<arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}