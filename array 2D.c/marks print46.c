#include<stdio.h>
int main(){
	int r;// humna user sa inpt liya h sab row and colums and numbers.
	printf("enter the number of rows :");
	scanf("%d",&r);
	int c;
	printf("enter the number of columns :");
	scanf("%d",&c);
	int arr[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
