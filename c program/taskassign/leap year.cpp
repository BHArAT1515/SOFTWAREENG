#include<stdio.h>


int is_leap_year(int year){
	if ((year % 4 == 0 && year % 100 !=0) ||year % 400 == 0) {
		return 1; //leap year
	} else {
		return 0; //not leap year
	}
}

int main() {
	int year;
	
	printf ("enter a year = ");
	scanf("%d", &year);
	
	if (is_leap_year(year)){
		printf("%d is a leap.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}
	
	
	return 0;
}
