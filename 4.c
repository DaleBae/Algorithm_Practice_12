#include<stdio.h>

int main(void){
	int n=0,k=0,i=0,j=0;
	int num[50]={0};

	scanf("%d %d",&n, &k);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}

	for(i=0;i<n;i++){
		if(num[i]>=num[k-1])
			if(num[i]>0)
				j++;
	}

	printf("%d",j);
}