#include <stdio.h>
int main(){
	int a,s=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		s+=i;
		if(s>a){
			printf("%d",i);
			break;
		}
	}
}
