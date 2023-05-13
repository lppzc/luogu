#include<iostream>
#include<cmath>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
    int a;
    double n;
    cin>>n>>a;
    for(int i=0;i<a;i++){
        n*=1+0.001;
    }
    printf("%.4lf",n);
    return 0;
}