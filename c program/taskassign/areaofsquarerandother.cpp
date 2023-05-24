#include<stdio.h>

#define PI 3.14159
//function to calculate the area of circle
float calculate_circle_area(float radius){
	float area = PI * radius * radius;
	return area;
}
//function to calculate the area of rectangle
float calculate_rectangle_area(float length, float width ) {
	float area = length * width;
	return area;
}
//function to calculate the area of triangle
float calculate_triangle_area(float base, float height) {
	float area = 0.5 * base * height;
	return area;
}
int main(){
	float radius, length, width, base, height;
	//circle
	printf("enter the radius of the circle: ");
	scanf("%f", &radius);
	float circle_area = calculate_circle_area(radius);
	printf("area of the circle: %0.2f\n", circle_area);
	
	//rectangle
	printf("enter the length of the rectangle: ");
	scanf("%f", &length);
	printf("enter the width of the rectangle: ");
	scanf("%f", &width);
	float rectangle_area = calculate_rectangle_area(length, width);
	printf("area of the rectangle: %0.2f\n", rectangle_area);
	
	//triangle
	printf("enter the base length of the triangle: ");
	scanf("%f", &base);
	printf("enter the height of the triangle: ");
	scanf("%f", &height);
	float triangle_area = calculate_triangle_area(base, height);
	printf("area of the triangle: %0.2f\n", triangle_area);
	
	return 0;
}
