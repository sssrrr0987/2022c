#include <stdio.h>
int main(){
	char a[4];
	scanf("%s",a);
	int s=0;
	if(a[0]=='1') s=8;
	if(a[1]=='1') s+=4;
	if(a[2]=='1') s+=2;
	if(a[3]=='1') s+=1;
	printf("%d\n",s);
}
