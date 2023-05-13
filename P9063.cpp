#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long a;
    cin>>a;
    for(int i=0;i<a;i++){
        long long n;
        cin>>n;
        if(n%2==0) cout<<"No";
        else cout<<"Yes";
        cout<<endl;
    }
    return 0;
}