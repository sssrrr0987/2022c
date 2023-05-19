#include <stdio.h>
int main(){
	int fast=1001,a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]<fast){
			fast=a[i];
			n=i;
		}
	}
	int ans=3600*1.2/fast;
	printf("%d %d\n",n+1,ans);
}
