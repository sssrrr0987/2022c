#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    vector<int> a(3);///��(3)�ǳ�3�ӰѼ�
    ///�Υ�push_back�[�j
    a[0]=100;
    a[1]=101;
    a[2]=102;
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
}
