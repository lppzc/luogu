//B2068 RM AC
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int ans;
    for(int i=0;i<n;i++){
        char a[5];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        int a1 = a[0] - '0';
        int a2 = a[1] - '0';
        int a3 = a[2] - '0';
        int a4 = a[3] - '0';
        if(a4 -a3-a2-a1 > 0) ans++;
    }
    cout<<ans;
    return 0;
}