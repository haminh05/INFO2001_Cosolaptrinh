#include <stdio.h>
int main(){
	int a=9, b=6;
	a++;
	a=a+b--;
	a=a+(--b);
	
	if (a%2==0) printf("tri a la chan");
    printf("gtri a= %d",a+b);
	return 0;
}
