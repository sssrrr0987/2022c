#include <stdio.h>
int main(){
	int a,leap=0;
	scanf("%d",&a);
	if(a%4==0) leap=1;
	else if(a%100==0) leap=0;
	else if(a%400==0) leap=1;
	else leap=0;
	if(leap==0) printf("%d is not a leap year.\n",a);
	else printf("%d is a leap year.\n",a);
}
