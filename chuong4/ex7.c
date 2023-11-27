#include<stdio.h>

void readNumber(int n){
	switch(n){
		case 1:
			printf("mot");
			break;
		case 2:
			printf("hai");
			break;
		case 3:
			printf("ba");
			break;
		case 4:
			printf("bon");
			break;
		case 5:
			printf("nam");
			break;
		case 6:
			printf("sau");
			break;
		case 7:
			printf("bay");
			break;
		case 8:
			printf("tam");
			break;
		case 9:
			printf("chin");
			break;
		default: printf(" ");
	} 
	
}

void timCachDoc(int n){
	int m,b,p,a;

	if (n<10){
		readNumber(n);
	}else if(n<20){
		m=n%10;
		printf("_muoi_");
		readNumber(m);
	} else if(n<100){
		b=n/10;
		m=n%10;
		readNumber(b);
		printf("_muoi_");
		readNumber(m);				
	}else {
		b=n/100;
//		a=n%100;
		m=(n%100)/10;
		p=n%10;
		if(m==0){
			readNumber(b);
		    printf("_tram_linh_");
		    readNumber(p);
	 	
		}else if(m==1){
			readNumber(b);
			printf("_tram_muoi_");
			readNumber(p);
		}else{
		readNumber(b);
		printf("_tram_");
		readNumber(m);
		printf("_muoi_");
		readNumber(p);
	}
	
} }



int main(){
	//input
	int n;
	printf("CHUONG TRINH DOC SO NHAP VAO \n");
	printf("nhap so can doc (lon hon 0 va nho hon 1000):\n");
	scanf("%d",&n);
	//process & output
	if(n>1000 || 0>n){
		printf("so nhap vao sai, vui long xem lai dieu kien\n");
	}else{
	
	printf("so nay duoc doc la: ");
	timCachDoc(n);
}
	return 0;
}
