#include<stdio.h>
main(){
	int num,x,y,i,sum=0;
	printf("enter the value x= ");
	scanf("%d",&x);
	
	printf("enter the value y= ");
	scanf("%d",&y);
	
	for(i=x;i<=y;i++){
		printf("\n%d",i);
		
		sum=sum+i;
		
	}
	printf("\ntotal num sum=%d",sum);
	
	
}
