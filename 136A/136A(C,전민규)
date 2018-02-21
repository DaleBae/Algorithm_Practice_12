#include <stdio.h>

int main(void){
	int i=0,j=0;
	int n=0;
	int p[100]={0};

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[p[j]-1]==i+1)
				printf("%d ",p[j]);
		}
	}
	return 0;
}

