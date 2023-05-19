#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a){
		int t=a;
		a=b;
		b=t;
	}
	if(c>b){
		int t=b;
		b=c;
		c=t;
	}
	if(b>a){
		int t=a;
		a=b;
		b=t;
	}
	printf("%d",a*100+b*10+c+1);
}
