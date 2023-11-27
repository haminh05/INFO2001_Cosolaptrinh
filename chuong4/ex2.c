#include<stdio.h>

float calculateArea(float length, float width){
	float area=length*width;
	return area;
}
float calculatePermiter(float length, float width){
	float Permiter=((length+width)*2);
	return Permiter;
}
int main(){
	//input
	float length, width;
	printf("nhap chieu dai va chieu rong:");
	scanf("%f %f",&length, &width);

	//process + output
	printf("dien tich la:%.2f \n",calculateArea(length,width));
	printf("chu vi la: %.2f",calculatePermiter(length,width));
	return 0;
	
}
