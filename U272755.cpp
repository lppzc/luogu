#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int>,greater<int>> n;
priority_queue<int,vector<int>,greater<int>> fake_n;

int main(){
    int b;
    cin>>b;
    int a;
    cin>>a;
    cout<<a<<endl;
    n.push(a);
    for(int i=1;i<(b+1)/2;i++){
        for(int j=0;j<2;j++){
            cin>>a;
            n.push(a);
        }
        fake_n = n;
        for(int j=0;j<n.size()/2;j++){
            fake_n.pop();
        }
        cout<<fake_n.top()<<endl;
    }
    return 0;
}