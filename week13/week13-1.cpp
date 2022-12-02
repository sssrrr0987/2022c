#include <stdio.h>
int main()
{
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);

	int left,right,ans=-9999999;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>ans){
				ans=a[j]-a[i];
				right=a[j];
				left=a[i];
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d%=%d\n",right,left,ans);

}

