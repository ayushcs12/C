#include<stdio.h>
int main(){ int i; int marks[5]; // this code is  wrong please try again.
	for(i=0;i<5;i++){
		printf("enter element no %d\n",i+1);
		scanf("%d",& marks[i]);
    }
	for(i=0;i<5;i++);{
		if(marks[i]<35){
			printf("%d ",marks[i]);
	    }
	}
	return 0;
}
