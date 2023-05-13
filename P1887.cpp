#include<iostream>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int ls = m;
    for(int i=1;i<=ls;i++){
        cout<<n/m<<" ";
        n -= n/m;
        m--;
    }
    return 0;
}