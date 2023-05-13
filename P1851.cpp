#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    while(1){
        int ls=0;
        for(int i=1;i<=n/2+1;i++){
            if(n%i==0){
                ls += i;
            }
        }
        int ls2=0;
        for(int i=1;i<=ls/2+1;i++){
            if(ls%i==0){
                ls2 += i;
            }
        }
        if(n == ls2 && n != ls){
            cout<<n<<" "<<ls;
            return 0;
        }
        n++;
    }
    return 0;
}