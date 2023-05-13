#include<iostream>
using namespace std;

int main(){
    int m,n; cin>>m>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int ls; cin>>ls;
        if(ls > m){
            ans++;
        }
        else{
            m-=ls;
        }
    }
    cout<<ans;
    return 0;
}
// AC B2067