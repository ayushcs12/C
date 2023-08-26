#include<stdio.h>
#include<stdbool.h>
int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int x =9; int i;
	int index =-1;
	bool flag = false;
	for(i=0;i<=6;i++){
		if(arr[i] == x){
			 flag =  true;
			index =1;
			break;
		}
	}
	if(flag == false){
		printf("%d is not present in the array",x);
	}
	else{
		printf("%d is present in the array and itsindexes is %d",index);
	}
	for(i=0;i<=6;i++){
		printf("%d",x);
	}
	return 0;
}
