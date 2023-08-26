#include<stdio.h>
int main(){
	int arr[8] ={1,2,3,4,5,6,7,8};
	int totaltriplet = 0;
	int x = 12; 
	int i,j,k;
	for(i=0;i<=7;i++){
		for(j=i+1;j<=7;j++){
			for(k=j++;k<=7;k++)
			if(arr[i]+arr[j]+arr[k]==x){
				totaltriplet++;
				printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
			}
		}
	}
	printf("%d",totaltriplet);
	return 0;
}
