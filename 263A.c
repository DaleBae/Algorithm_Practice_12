#include<stdio.h>

int main(void){
	int i=0,j=0,a=0,b=0,n=0;
	int arr[5][5]={0};

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]==1){
				a=i;
				b=j;
			}
		}
	}

	while(1){
		if(a==2 && b==2){
			printf("%d",n);
			break;
		}
		if(a<2){
			a++;
			n++;
		}
		else if(a>2){
			a--;
			n++;
		}
		if(b<2){
			b++;
			n++;
		}
		else if(b>2){
			b--;
			n++;
		}
	}
	return 0;
}