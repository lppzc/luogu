#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
using namespace std;

int main(){
	int n; cin>>n;
	long long ans=0;
	for(int i=0;i<n;i++){
		int ls; 
		cin>>ls;
		ans+=ls;
	}
	cout<<ans<<" ";
	printf("%.5lf",ans * 1.0 / n);
	return 0;
} 