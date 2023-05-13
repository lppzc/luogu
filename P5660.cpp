#include<iostream>
using namespace std;

int main(){
    int ans=0;
    char ls;
    for(int i=0;i<8;i++){
        cin>>ls;
        if(ls == '1') ans++;
    }
    cout<<ans;
    return 0;
}