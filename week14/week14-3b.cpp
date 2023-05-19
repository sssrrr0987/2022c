#include <stdio.h>
int main(){
	int a,b[100];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(int i=a-1;i>=0;i--){
		if(b[i]%2!=0) printf("%d ",b[i]);
	}
}
