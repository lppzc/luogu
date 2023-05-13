#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double a,b,c; cin>>a>>b>>c;
	double p = 0.5*(a+b+c);
	printf("%.1lf",sqrt(p*((p-a)*(p-b)*(p-c))));
	return 0;
} 