#include<iostream>
using namespace std;

int ans;

int xa,ya,xb,yb;

void ma(int lsa,int lsb){
    if(lsa == xa && lsb == ya){
        ans++;
        return ;
    }
    if(lsa-2 != xb&& lsa -1 != xb && lsa +1 !=xb && lsa +2 !=xb && lsb-2!=yb&&lsb-1!=yb&&lsb+1!=yb&&lsb+2!=yb){

    }
    else{
        return ;
    }
    if(lsa+1 <= xb && lsa+1 >=0){
        ma(lsa+1,lsb);
    }
    if(lsb+1 <= yb && lsb+1 >= 0){
        ma(lsa,lsb+1);
    }
}

int main(){
    cin>>xa>>ya>>xb>>ya;
    ma(0,0);
    cout<<ans;
    return 0;
}