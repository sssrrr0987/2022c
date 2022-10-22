# 2022c-
資傳一甲 程式設計 的程式倉庫

# Week01
放假(中秋節)

# Week02

# Week03

# Week04

# Week05


# Week06
## step01-0_九九乘法表
考前複習、考後檢討同學出錯的狀況
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
}
```
## step01-1_畫星星-金字塔
使用的技巧,是先用左手i來建立鷹架
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int star=2*i-1;
        printf("鷹架:%d樓 %d星\n",i,star);
    }
}
```
## step01-2_金字塔
有了鷹架樓層,接下來便是決定第i樓有幾個space空格、有幾個star星星。找到規律,便能寫出公式, 並利用迴圈基礎型,輕鬆把星星畫出來。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i;
        int star=2*i-1;
        for(int k=0;k<space;k++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step02-1_暴力法
想要分數約分,可以使用暴力法,去找到都整除的數字, 就能約分了 
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++){
        if(a%i==0 &&b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step02-2_介紹輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(1){///一直做
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step03-1_while(1) 一直執行的原因
講解剛剛輾轉相除法程式中的意思,接下來為了介紹  所以利用if(1)來示範成立、不成立的差別
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立,所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西,幾乎都成立\n");
}
```

# Week07
## step02-1_介紹long long int跟int差別
有了long long int 那我們便能回來複習最大公因數了。數字範圍再大一點, 結果要算好久。讀寫資料時要用%lld 是小寫的LLD,不是數字11d哦
```cpp
#include <stdio.h>
int main()
{
    int a=1234567812345678;///裝32位元
    printf("%d\n",a);
    ///最大只能裝9-10位數
    long long int b=1234567812345678;///裝64位元
    printf("%lld\n",b);
    ///最大只能裝18-19位數
}
```
## step02-2_用long long int來尋找两數最大公因數
(暴力法)
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,ans;
    scanf("%lld %lld",&a,&b);
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld\n",ans);
}
```
## step02-3_用long long int改寫輾轉相除法
因為前面的暴力法真的很慢,所以我們要改用輾轉相除法。上週做過, 今天再用 long long int 很長很長的整數 再做一次。口訣是 老大a, 老二b 可以算出 老三c=a%b, 如果老三c是0, 老二b就是答案。輾轉的意是,是老二變老大, 老三變老二, 利用while(1)持續去做。
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("%lld %lld %lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }

    printf("答案是:%lld\n",b);
}
```
## step03-1_剝皮法 
今天為了教剝皮法, 老師先介紹資工系阿平老師出的題目,把數字3位一逗號。再介紹十進位的每一位數取出來,再介紹利用while(迴圈)的方法, 最後還有示範十進位轉二進位。
```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    while(n>0){
        printf("個位數是%d\n",n%10);
        n=n/10;
    }
}
```
