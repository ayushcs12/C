#include<stdio.h>//check this code;
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
			scanf("%d ",&a[i][j]);
		}
	}
	printf("\n");
	int minr =0;
	int maxr =m-1;
	int minc=0;
	int maxc=n-1;
	int tne = m*n;
	int count =0;
	while(count<tne){
		for(j=minc;j<=maxc;j++){
			printf("%d",a[minr][j]);
			count++;}
		minr++;
		if(count>=tne) break;
			for(i=minc;i<=maxr;i++){
			printf("%d",a[i][maxr]);
			count++;}
	 maxc--;
	 if(count>=tne) break;
	 for(j=maxc;j>=minc;j--){
		printf("%d",a[maxr][j]);
		count ++;}
	 maxr--; 
	 if(count>=tne) break;
	 for(i=maxr;i>=minr;i--){
		printf("%d",a[i][minc]);
		count ++;}
	 minc++;
	 if(count>=tne) break;
}
}
