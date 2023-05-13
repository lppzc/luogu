#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; cin>>n;
    double ans;
    for(int i=0;i<n;i++){
        double lsa,lsb,lsc; cin>>lsa>>lsb>>lsc;
        ans+=sqrt(lsa*lsa+lsb*lsb)/25.0+lsc*1.5;
    }
    cout<<(long long)ans+1;
    return 0;
}