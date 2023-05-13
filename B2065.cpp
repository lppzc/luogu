#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int lsa,lsb; cin>>lsa>>lsb;
    double a = lsb * 1.0 / lsa;
    for(int i=1;i<n;i++){
        int lsc,lsd;
        cin>>lsc>>lsd;
        double ls = lsd * 1.0 / lsc;
        if(ls > a+0.05) cout<<"better"<<endl;
        else {
            if(a > ls+0.05) cout<<"worse"<<endl;
            else cout<<"same"<<endl;
        }
    }
    return 0;
}