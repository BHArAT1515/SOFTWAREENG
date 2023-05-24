#include<stdio.h>
main(){
	int num,sq;
	printf("\n enter num: ");
	scanf("%d", &num);
	if (num>0){
		sq=num*num;
		printf("\n square of %d=%d", num, sq);
	}
}
