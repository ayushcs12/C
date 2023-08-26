#include<stdio.h>
int main(){
	int m;
	printf("enter the first no. :");
	scanf("%d",&m);
	int n;
	printf("enter the second no. :");
	scanf("%d",&n);
	int a[m][n];
	printf("enter the all numbers :");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		if(i%2==0)
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		else{
		for(j=n-1;j>=0;j--)//j =0;j<n;j++ agar sidha loop chalata ha to same print hoga
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
