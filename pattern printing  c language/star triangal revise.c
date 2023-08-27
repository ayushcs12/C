#include<stdio.h>
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-1;j++){
			printf("#");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
