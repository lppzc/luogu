#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    if(n % 2 == 0 && n != 2) cout<<"YES";
    else cout<<"NO";
    return 0;
}