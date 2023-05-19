#include <stdio.h>
int main(){
	char a;
	while(1){
		scanf("%c",&a);
		if(a>='1'&&a<='9'){
			printf("%c\n",a);
			break;
		}
	}
}
