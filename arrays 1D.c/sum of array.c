#include<stdio.h>
int main(){
//	int arr[5] = {8,3,4,5,6};
//	int sum=0; int i;
//    for(i=0;i<=4;i++){
//    	sum = sum + arr[i];
//	}
//	printf("%d\n",sum);
//	return 0;
//}
// user input .c
int n,i;
printf("enter a fix of array");
scanf("%d",&n);
int arr[n];
for(i=0;i<=n-1;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i++){
	printf("%d",&arr[i]);
}
}
