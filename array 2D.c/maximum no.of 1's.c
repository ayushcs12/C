#include<stdio.h>
int main(){
	int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
	int maxcount = 0;
	int maxindx = 0;
	int i,j;
	printf("\n");
	for(i=0;i<=3;i++){
		int count = 0;
		for(j=0;j<=4;j++){
			if(arr[i][j]==1)
			count ++;
		}
		if(maxcount<count){
			maxcount=count;
			maxindx=i;
		}
	}
	printf("the maximum no of matrix %d and index %d",maxcount,maxindx);
	return 0;
}

