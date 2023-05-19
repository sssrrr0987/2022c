#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int bad,s=0;
	for(int i=a;i<=b;i++){
		bad=0;
		for(int j=1;j<=i;j++){
			if(i%j==0) bad++;
		}
		if(bad==2) s++;
	}
	printf("%d\n",s);
}
