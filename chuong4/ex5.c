#include<stdio.h>

int isPerfectSquare(int m){
	int i;
	for (i=1;i<=m;i++){
		if(m==i*i){
			return 1;
		}
		
	} return 0;
}
void listPerfectSquare(int n){
	int i;
	printf("DANH SACH SO CHINH PHUONG:\n");
	for ( i=1;i<=n;i++){
		if (isPerfectSquare(i)==1){
			printf("%d\t",i);
		}
		
	}
}
int main(){
	int n,i;
	printf("CHUONG TRINH TIM SO CHINH PHUONG TU 1 DEN N\n");
	printf("nhap mot so nguyen n:");
	scanf("%d",&n);
	listPerfectSquare(n);
	return 0;
}
