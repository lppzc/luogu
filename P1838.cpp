#include<iostream>
#include<string>
using namespace std;


int main(){
    int n[9];
    string a;
    cin>>a;
    if(a.length() < 9){
        if(a.length() % 2 == 0){
            cout<<"uim wins.";
        }
        else{
            cout<<"xiaoa wins.";
        }
        return 0;
    }
    else{
        for(int i=0;i<9;i++){
            if(i % 2 == 1){
                n[a[i]-'0'-1] = 1;
            }
            else{
                n[a[i]-'0'-1] = 0;
            }
        }
    }
    int wins = 9;
    if(n[0] == n[1] && n[1] == n[2]){
        wins = n[0];
    }
    if(n[3] == n[4] && n[4] == n[5]){
        wins = n[4];
    }
    if(n[6] == n[7] && n[7] == n[8]){
        wins = n[7];
    }
    if(n[0] == n[3] && n[3] == n[6]){
        wins = n[0];
    }
    if(n[1] == n[4] && n[4] == n[7]){
        wins = n[1];
    }
    if(n[2] == n[5] && n[5] == n[8]){
        wins = n[2];
    }
    if(n[0] == n[4] && n[4] == n[8]){
        wins = n[0];
    }
    if(n[2] == n[4] && n[4] == n[6]){
        wins = n[2];
    }
    if(wins == 9) cout<<"drew.";
    else{
        if(wins == 0) cout<<"xiaoa wins.";
        else cout<<"uim wins.";
    }
    return 0;
}