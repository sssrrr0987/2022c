// �Ѳ����̨ζR�I�P���I
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
	printf("�Ы����N���~�� . . . \n�̤j�Q��=%d-%d=%d\n",big,min,max);

}

