#include<cstdio>
#include<iostream>
using namespace std;

int a[100];
bool b[100];
int n,m;

void dfs(int num,int k){
	if(num == m){
		for(int i=0;i<m;i++){
			printf("%3d",a[i]);
		}
		printf("\n");
		return;
	}
	for(int i=k;i<=n;i++){
		if(b[i] == 0){
			b[i] = 1;
			a[num] = i;
			dfs(num+1,i);
			b[i] = 0;
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	dfs(0,1);
	return 0;
}