#include <stdio.h>
int main(){
	int a[10],i=0,b,s=0;
	scanf("%d",&a[0]);
	while(a[i]!=0){
		i++;
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	while(i+1){
		if(b==a[i]) s++;
		i--;
	}
	printf("%d\n",s);
}

