#include<iostream>
#include<stack>
using namespace std;

stack<long long> a;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++){
        long long cit;
        cin>>cit;
        a.push(cit);
    }
    long long top = a.top();
    for(int i=0;i<n/2;i++){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<"\n";
    cout<<top<<" ";
    for(int i=0;i<n-(n/2);i++){
        long long ls;
        cin>>ls;
        cout<<ls<<" ";
    }
    return 0;
}