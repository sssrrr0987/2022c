#include <stdio.h>
///函式定義
int addnum(int a,int b)///不用分號
{
    return a+b;
}

int main()
{
    int ans=addnum(2,3);///函式的呼叫
    printf("addnum(2,3) 會得到%d\n",ans);
}
