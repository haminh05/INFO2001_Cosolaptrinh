#include<stdio.h>

int isPrimeNumber(int m){
	if (m<2){
		return 0;
	}
	else{
		int i;
		for (i=2; i<m;i++){
			if (m%i==0){
				return 0;
			 
			}
			
		}
		return 1;
	}
}
		
	


void listPrimeInN(int n){
	int i;
	printf("DANH SACH SO NGUYEN TO TRONG PHAM VI N \n");
	for (i=2;i<n;i++){
		if (isPrimeNumber(i)==1){
			printf("%d\t",i);
		}
	}
}

int main(){
	//input
	int n;
	printf("nhap so nguyen duong:");
	scanf("%d",&n);
	//process & output
	if(n<2){
		printf("KHONG CO SO NGUYEN TO");
	}
	else 
	listPrimeInN(n);
	
	return 0;
}
