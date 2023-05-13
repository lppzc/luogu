#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	double xa,xb,xc,ya,yb,yc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	double a,b,c;
	a = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	b = sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	c = sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
	double p = 0.5*(a+b+c);
	printf("%.2lf",sqrt(p*((p-a)*(p-b)*(p-c))));
	return 0;
} 