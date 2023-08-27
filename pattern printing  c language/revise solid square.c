#include<stdio.h>
int main()
{
	int n;
	printf("enter a row : ");
	scanf("%d",&n);
		int m;
	printf("enter a columns : ");
	scanf("%d",&m);
	int i; int j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;i++){
			printf("*");
		}
		printf("/n");
	}
	return 0;
}
