#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    double exp=0,level=0,hp=10;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double lsh,lsp; cin>>lsh>>lsp;
        hp -= lsh;
        if(hp >= 10){
            hp = 10;
        }
        if(hp <= 0){
            break;
        }
        else{
            exp += lsp;
        }
    }
    while(exp>=pow(2,level)){
        exp-=pow(2,level);
        level++;
    }
    cout<<level<<" "<<exp;
    return 0;
}