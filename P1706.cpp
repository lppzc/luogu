#include<cstdio>
#include<iostream>
using namespace std;

int a[10];
bool b[10];
int n;

void dfs(int num){
	if(num == n){
		for(int i=0;i<n;i++){
			cout<<"    "<<a[i];
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i] == 0){
			b[i] = 1;
			a[num] = i;
			dfs(num+1);
			b[i] = 0;
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(0);
	return 0;
}