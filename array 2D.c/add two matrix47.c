#include<stdio.h>
int main(){
	int a[2][2] = {1,2,3,4};
	int b[2][2] = {5,6,7,8};
	printf("\n");
	int result[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			 result[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}

