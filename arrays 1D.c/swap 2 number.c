#include<stdio.h>
void fun (int x[]){
	int temp = x[0];
	x[0] = x[1];
	x[1] = temp;
	return; 
}
int main(){ int i;
	int arr[2] = {2,9};
	printf("%d%d\n",arr[0],arr[1]);
	fun (arr);
	printf("%d%d\n",arr[0],arr[1]);
	return 0;
}
/* output 29
    92*/
