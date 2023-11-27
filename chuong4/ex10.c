#include<stdio.h>
#include<math.h>
int main(){
	int p,q;
	float a,b,c,tinhBieuThuc;
	printf("nhap hai so nguyen bat ki de tinh:");
	scanf("%d %d",&p, &q);
	a=-q/2;
	b=pow(p,3)/27;
	c=pow(q,2)/4;
	tinhBieuThuc=(float)pow((a+pow(b+c,1/2)),1/3)+pow((a-pow(b+c,1/2)),1/3);
	printf("ket qua bieu thuc la:%.2f",tinhBieuThuc);
	return 0;
}












