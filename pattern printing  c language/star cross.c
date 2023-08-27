#include<stdio.h>
int main()
{
	int n;
	printf("enter a row :");
	scanf("%d",&n);
	int i; int j;
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		if(i==j ||i+j==6) printf("*");// n+1 bhi la sakta h 6 ki jangha
    		else 
			printf(" ");
    	}
		printf("\n");
	}
	return 0;
}
