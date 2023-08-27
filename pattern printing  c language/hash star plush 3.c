#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int i; int j;
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		if(i==2||j==2) printf("*");
    		else printf("#");
    	}
		printf("\n");
	}
	return 0;
}
