#include <stdio.h>
int main(){
	//input
	int a,b,sum,difference,product;
	float quotient;
	printf("nhap gia tri a va b (b khac 0, -109<=a, b<=109):");
	scanf("%d %d",&a, &b);
	//process
	sum= a+b;
	difference=a-b;
	product=a*b;
	quotient=(float)a/b;
	//output
	printf("tong,hieu,tich,thuong lan luot la %d %d %d %.2f",sum, difference, product, quotient);
	return 0;
	
	
	
}
