#include<iostream>
using namespace std;

const int N = 1e8+5;

bool a[N];
int ans = 0;

int main(){
    int n; scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(a[i] == 0){
            for(int j=i;j*i<=n;j++){
                a[j*i] = true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(a[i] == 0){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}