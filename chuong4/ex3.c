#include<stdio.h>
#define PI 3.14

float calculateArea(float r){
	float area=PI*r*r;
	return area;
}
float calculateCircumference(float r){
	float circumference=2*PI*r;
	return circumference;
}

int main(){
	//input
	float r;
	printf("CHUONG TRINH TINH CHU VI VA DIEN TICH HINH TRON\n");
	printf("nhap ban kinh r=");
	scanf("%f",&r);
	//process & output
	printf("dien tich hinh tron la:%.2f \n",calculateArea(r));
	printf("chu vi hinh tron la:%.2f",calculateCircumference(r));
	return 0;
}
