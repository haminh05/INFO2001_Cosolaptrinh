#include<stdio.h>
int main(){
	#define PI 3.14
	float r;
	printf("ban kinh r=");
	scanf("%f",&r);
	float area,perimeter;
	area=PI*r*r;
	printf("dien tich hinh tron la %.2f \n",area);
	perimeter=PI*2*r;
	printf("chu vi hinh tron la %.2f",perimeter);
		
	return 0;
}

