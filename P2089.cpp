#include<cstdio>
#include<iostream>
using namespace std;

int b[50005][15];
int a[15];
int n;
int ans;

void dfs(int num){
    if(num >= 11) return;
	if(num == 10 && n == 0){
		for(int i=0;i<10;i++){
			b[ans][i] = a[i];
		}
        ans++;
		return;
	}
	for(int i=1;i<=3;i++){
		if(n - i >= 0){
			a[num] = i;
			n -= i;
			dfs(num+1);
			n += i;
		}
		else{
			return;
		}
	}
}

int main(){
	scanf("%d",&n);
    if(n<=9 || n > 30){
        cout<<"0";
        return 0;
    }
	dfs(0);
    printf("%d\n",ans);
    for(int i=0;i<ans;i++){
        for(int j=0;j<10;j++){
            printf("%d ",b[i][j]);
        }
        //printf("\n");
    }
	return 0;
}