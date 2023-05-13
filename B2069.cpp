#include<iostream>
#include<stdio.h>
using namespace std;

double a[35],b[35];

int main(){
    double ans=0;
    a[1] = 1;
    b[1] = 2;
    for(int i=2;i<=31;i++){
        b[i] = b[i-1] + a[i-1];
        a[i] = b[i-1];
    }
    int n; cin>>n;
    for(int i=0;i<n;i++){
        ans += b[i+1] * 1.0 / a[i+1] * 1.0;
    }
    printf("%.4lf",ans);
    return 0;
}