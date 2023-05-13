#include<iostream>
#include<algorithm>
using namespace std;

int N = 100005;
long long n,d,e;

int main(){
    int a; cin>>a;
    for(int i=0;i<a;i++){
        int stop=0;
        cin>>n>>d>>e;
        int ls=0;
        for(int j=1;j<abs((e*d-n));j++){
            if(n%j!=0){
                continue;
            }
            else{
                ls = n/j;
                if(j>ls) break;
                if((j-1)*(ls-1)+1 == e * d){
                    cout<<j<<" "<<ls<<endl;
                    stop++;
                    break;
                }
            }
        }
        if(stop == 0) cout<<"NO"<<endl;
    }
    return 0;
}