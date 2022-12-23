// 股票的最佳買點與賣點
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-999999,big,min;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max){
				max=a[j]-a[i];
				big=a[j];
				min=a[i];
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n最大利潤=%d-%d=%d\n",big,min,max);

}

