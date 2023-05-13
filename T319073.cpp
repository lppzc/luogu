#include<iostream>
#include<cmath>
using namespace std;

int zs(long long n){
    short gg=0;
    //long long ls = n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0) gg++;
        if(gg >= 2) return 1;
        while(n%i == 0){
            n /= i;
        }
        if(n == 1) return 0;
        else{
            //n = ls;
            continue;
        }
        if(i%2 == 1) i++;
    }
    if(n == 1) return 0;
    else{
        return 1;
    }
}

int main(){
    long long ans = 0;
    long long n;
    short k;
    cin>>n>>k;
    if(k==1){
        cout<<n;
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(zs(i) == 1){
            for(int j=k;j<101;j++){
                if(pow(i,j) <= n){
                    ans++;
                    //cout<<i<<" "<<j<<endl;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<ans+1;
    return 0;
}