#include <stdio.h>
int main(){
	int a,s=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		s+=i*i;
	}
	printf("%d",s);
}
