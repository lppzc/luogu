#include<iostream>
using namespace std;

int u[100005],t[100005];

void pd(int t[],int us,int ticket,int g){
    if(g - t[us] > 45 && us < ticket-1){
        us++;
        pd(t,us,ticket,g);
    }
}

int main(){
    int h,ans=0,us=0,ticket=0; cin>>h;
    for(int i=0;i<h;i++){
        int n,m,g; cin>>n>>m>>g;
        if(n == 0){
            ans+=m;
            t[ticket++] = g;
        }
        else{
            pd(t,us,ticket,g);
            if(g - t[us]<= 45 && t[us] != 0){
                us++;
            }
            else{
                ans+=m;
            }
        }
    }
    cout<<ans;
    return 0;
}