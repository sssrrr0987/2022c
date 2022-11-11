#include <stdio.h>
int main()
{
    long long int a,b,ans;
    scanf("%lld %lld",&a,&b);
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("µª®×¬O:%lld\n",ans);
}
