#include<stdio.h>
int main(){
	int n;
	printf("enter row/column :");
	scanf("%d",&n);
	printf("enter all element\n");
	int arr[n][n];
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//transpose
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	printf("\n");
//output
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	//rotate
	for(i=0;i<n;i++){
		int j=0;
		int k=n-1;
		while(j<k){
		int temp = arr[i][j];
		arr[i][j] =arr[i][k];
		arr[i][k] = temp;
		j++;
		k--;
		}
	}
	printf("\n");
//output
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
