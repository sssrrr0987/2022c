#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a==i*i){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
