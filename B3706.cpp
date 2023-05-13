#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
long long x,z;
double c;

int main(){
    scanf("%lld%lld%lf",&x,&z,&c);
    cout<<(long long)ceil((x-2*z)/c);
    return 0;
}