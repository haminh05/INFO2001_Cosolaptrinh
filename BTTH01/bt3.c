#include <stdio.h>
int main(){
	int a,b,c,s;
   	printf("nhap a, b, c lan luot la: ");
	scanf ("%d %d %d",&a, &b, &c);
	s=a*(b+c)+b*(a+c);
	printf("gia tri cua S la: %d",s);
	return 0;
}
