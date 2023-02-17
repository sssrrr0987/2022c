#include <stdio.h>
int main(){
    printf("請輸入字串: ");
    char line[40];
    scanf("%s",line);///不能加&
    ///tab、enter、空格會斷開
    printf("你讀入了: %s\n",line);
}
