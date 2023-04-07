#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    vector<int> a(3);///用(3)準備3個參數
    ///或用push_back加大
    a[0]=100;
    a[1]=101;
    a[2]=102;
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
}
