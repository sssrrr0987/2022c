#include <stdio.h>
int main(){
    int a=33,b=99;
    printf("%d %d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("%d %d\n",a,b);
}
