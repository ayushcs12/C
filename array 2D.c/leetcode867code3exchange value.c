#include<stdio.h>
int main(){
	int n;
	printf("enter a row/columns :");
	scanf("%d",&n);
	printf("enter all elements");
	int arr[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			printf("%d",arr[i][j]);
		}
	}
    return 0;
}
