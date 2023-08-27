//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("enter a number :");
//	scanf("%d",&n);
//	int i; int j;
//    for(i=1;i<=n;i++){
//    	for(j=1;j<=n;j++){
//    		if(i==3||j==3) printf("*");
//    		else printf("#");
//    	}
//		printf("\n");
//	}
//	return 0;
//}


     // OR


#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	int i; int j;
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		int a =n/2+1;
    		if(i==a||j==a) printf("*");
    		else printf("#");
    	}
		printf("\n");
	}
	return 0;
}
