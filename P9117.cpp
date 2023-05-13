#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
#include<cstdio>
using namespace std;
const int N = 1e3+1;
int a[N][N];

void cs(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
            a[i][j] = 0;
        }
        cout<<endl;
    }
}

int main(){
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++){
        int ln,m,q; scanf("%d%d%d",&ln,&m,&q);
        for(int j=0;j<q;j++){
            int la,lb,lc; scanf("%d%d%d",&la,&lb,&lc);
            if(la == 0){
                for(int p=0;p<m;p++){
                    a[lb-1][p] = lc;
                }
            }
            if(la == 1){
                for(int p=0;p<ln;p++){
                    a[p][lb-1] = lc;
                }
            }
        }
        cs(ln,m);
    }
    return 0;
}