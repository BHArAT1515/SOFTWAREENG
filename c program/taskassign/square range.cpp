#include<stdio.h>
main(){
	int num,x=,y=,i,sq,sum;
	printf("enter the value x= ");
	scanf("%d",&x);
	
	printf("enter the value y= ");
	scanf("%d",&y);
	
	for(i=x;i<=y;i++){
		printf("\n%d",i);
		
		sq=i*i;
		printf("is squre =%d",sq);	
	}
	
}
