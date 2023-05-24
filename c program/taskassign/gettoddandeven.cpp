#include<stdio.h>
main(){
	int num,x,y,i,even=0,odd=0,sum;
	printf("enter the value x= ");
	scanf("%d",&x);
	
	printf("enter the value y= ");
	scanf("%d",&y);
	
	for(i=x;i<=y;i++){
		printf("\n%d",i);
		
		if(i%2==0){
		printf("is even num",i);		
		even=even+i;
		
	    }
	else{
		printf("is odd num",i);
		odd=odd+i;
		
		
	  }
    }	
    printf("\n\neven num sum is =%d",even);
    printf("\nodd num sum is =%d",odd);
}
