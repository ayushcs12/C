#include<stdio.h>
int main()
{
	int n;
	printf("enter a row :");
	scanf("%d",&n);
	int i; int j; int a;
    for(i=1;i<=n;i++){
//    	if(i%2==0) a=1;
//    	else a=0;}
    	for(j=1;j<=i;j++){
//			printf("%d",a);
//			if(a=0) a=1;
//			else
//			 a=0;}
           if((i+j)%2==0) printf("1");
           else
           printf("0");
    	}
		printf("\n");
	}
	return 0;
}
