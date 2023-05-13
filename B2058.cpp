#include<iostream>
using namespace std;

int main(){
    int n;
    int a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int lsa,lsb,lsc;
        cin>>lsa>>lsb>>lsc;
        a+=lsa;
        b+=lsb;
        c+=lsc;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c;
    return 0;
}