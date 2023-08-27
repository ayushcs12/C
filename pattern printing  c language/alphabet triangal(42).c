#include<stdio.h>
int main()
{
	int n;
	printf("enter no. a line : ");
	scanf("%d",&n);
	int i; int j; int k; int d;
	for( i=1;i<=n;i++){
		for( j=1;j<=n-i;j++){
			printf(" ");
		}
		for( k=1;k<=i;k++){ 
		char ch =(char)(k+64);
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
