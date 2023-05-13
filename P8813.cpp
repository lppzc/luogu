#include<iostream>
using namespace std;


int main(){
    long long a,b,ans = 1;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        ans *= a;
        if(ans >1000000000){
            cout<<"-1";
            return 0;
        }
    }
    cout<<ans;
    return 0;
}