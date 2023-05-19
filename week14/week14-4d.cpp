#include <stdio.h>
int main(){
	int a,x=1;
	scanf("%d",&a);
	while(a){
		printf("%d ",a%10*x);
		a/=10;
		x*=10;
	}
}
