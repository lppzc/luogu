#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 1e2+1;
short a[N];

short n;

bool fd(int ans){
    int L=0,R=n,mid;
    while(L<R){
        mid = (L + R + 1)/2;
        if(a[mid] == ans) return 1;
        if(a[mid] < ans){
            L = mid;
        }
        else{
            R = mid;
        }
        if(a[L] == ans || a[R] == ans) return 1;
        if(a[L] != ans && a[R] != ans && abs(L-R) == 1) return 0;
        //cout<<L<<" "<<R<<" "<<mid<<endl;
    }
    if(a[mid] != ans) return 0;
}

int main(){
    int ans = 0;
    scanf("%d",&n);
    for(short i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(fd(a[i]+a[j]) == 1) ans++;
            else continue;
        }
    }
    cout<<ans;
    return 0;
}