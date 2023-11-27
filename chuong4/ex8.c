#include<stdio.h>

int calculateRent(int gbd, int gkt, int soMay){
	int tongThoiGian,bill;
	tongThoiGian=gkt-gbd;
	if(gbd>18){
		bill=tongThoiGian*3000*soMay;
		
	}
	if(gkt<18){
		bill=tongThoiGian*2500*soMay;
		
	}else {
		bill=((18-gbd)*2500+(gkt-18)*3000)*soMay;
	}
	printf("tong tien thue may hom nay la:%d VND",bill);
	return bill;
}







int main(){
	//input
	int gbd,gkt,soMay;
	printf("CHUONG TRINH THUE MAY DICH VU INTERNET \n");
	printf("nhap so may da thue:");
	scanf("%d",&soMay);
	printf("nhap thoi gian bat dau thue:\n");
	scanf("%d",&gbd);
	printf("nhap thoi gian ket thuc thue:\n");
	scanf("%d",&gkt);
	//process & output
	if(gbd<6||gbd>gkt||gkt>21){
		printf("du lieu nhap vao sai, hay nhap lai");
	}else{
		calculateRent(gbd,gkt,soMay);
		
	}
	return 0;
}
