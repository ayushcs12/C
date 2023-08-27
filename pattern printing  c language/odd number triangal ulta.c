#include<stdio.h>
int main()
{
	int n;
	printf("enter a row :");
	scanf("%d",&n);
	int i; int j;
	//	int a=1;
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=n+1-i;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}
