#include<iostream>
#include<cstdio>
using namespace std;
const int N = 1e5+5;
int a[N];
void sort(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int ls = a[i];
                a[i] = a[j];
                a[j] = ls;
            }
        }
    }
}

int b[N];

void ms(int n,int m){
    for(int i=0;i<n-m+1;i++){
        b[i] = a[i+m-1] - a[i];
    }
}

void sortb(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                int ls = b[i];
                b[i] = b[j];
                b[j] = ls;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(n);
    ms(n,m);
    sortb(n-m+1);
    cout<<b[0];
    return 0;
}