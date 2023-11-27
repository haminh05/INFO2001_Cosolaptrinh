#include<stdio.h>

int calculateSalary(int checkIn,int checkOut){
	int salary,totalTime;
	totalTime=checkOut-checkIn;
	if (checkIn>12){
		salary=totalTime*7500;
	}
	else if (checkOut<12){
		salary=totalTime*6000;
	}else{
		salary=(12-checkIn)*6000+(checkOut-12)*7500;
		
	}
	printf("tong thoi gian lam viec hom nay la:%d gio\n",totalTime);
	printf("tong tien luong hom nay la:%d VND",salary);
	return salary;
}





int main(){
	//input
	int checkIn, checkOut;
	printf("CHUONG TRINH TINH LUONG CONG NHAN THEO NGAY\n");
	printf("nhap gio vao ca cua ban:\n");
	scanf("%d",&checkIn);
	printf("nhap gio ra ca cua ban:\n");
	scanf("%d",&checkOut);
	//process & output
	if(checkIn<6||checkOut>18){
		printf("du lieu sai, vui long nhap lai");
	}else{
		calculateSalary(checkIn,checkOut);
	}
	return 0;
}
