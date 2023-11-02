#include<stdio.h>
int main(){
	int c;
	float f;
	printf("nhap nhiet do (nho hon 106 do C):");
	scanf("%d",&c);
	f=(float)(c*9/5)+32;
	printf("\n nhiet do la: %.2f do F",f);
	return 0;
}
