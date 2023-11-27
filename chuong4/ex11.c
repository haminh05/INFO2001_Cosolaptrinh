#include<stdio.h>

int main(){
	//input
	float a,b,c,area,heighA,heighB,heighC,perimeter;
	printf("nhap do dai 3 canh a,b,c lan luot la: \n");
	scanf("%f %f %f",&a,&b,&c);
	perimeter=a+b+c;
	area=sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
	heighA=(2*area)/a;
	heighB=(2*area)/b;
	heighC=(2*area)/c;
	//process
	if(a+b>c && b+c>a && a+c>b){
		printf("ba canh nay lap thanh mot tam giac\n");
		printf("tam giac co dien tich la:%.2f \n",area);
		printf("do dai cua duong cao ha la:%.2f, cua hb la:%.2f, cua hc la:%.2f",heighA,heighB,heighC);
		
	}else 
	printf("ba canh nay khong lap thanh tam giac");
	return 0;
}
