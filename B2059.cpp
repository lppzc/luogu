#include<iostream>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    long long ans=0;
    for(int i=a;i<=b;i++){
        if(i % 2 == 1) ans+=i;
    }
    cout<<ans;
    return 0;
}