#include<stdio.h>
int main(){
	int m;
	printf("enter the first matrix :");
	scanf("%d",&m);
	int n;
	printf("enter the first matrix :");
	scanf("%d",&n);
	int a[m][n];
	printf("enter the first matrix :");
	int i,j,k;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int p;
	printf("enter the second matrix :");
	scanf("%d",&p);
	int q;
	printf("enter the first matrix :");
	scanf("%d",&q);
	int b[p][q];
	printf("\n enter all element second matrix :");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&b[p][q]);
		}
	}
	if(n!=p){
		printf("the matrix cannot be mu");
	}
	else{ 
		int rev[m][q];
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				rev[i][j] = 0;
				for(k=0;k<n;k++)
					rev[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("the resutant matrix is :");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d",rev[i][j]);
		}
		printf("\n");
	}
	return 0;
}
