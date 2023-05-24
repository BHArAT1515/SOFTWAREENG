#include<stdio.h>
/*
while (condition){
     //block
}
*/
main(){
	int i=1, j=1; //initialization
	while (i<=10){//condition
	printf("\n i= %d", i);
	i++;
	}
	
	printf("/n ==========table==========");
	while (j<=10){
		printf("\n 2 * %d = %d",j,j*2);
		j++;
	}
}
