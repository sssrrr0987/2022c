#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a,ans=0;
	while(b){
		ans=ans*10+b%10;
		b/=10;
	}
	printf("%d\n",ans);
}
