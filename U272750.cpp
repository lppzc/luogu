#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string,int> n;

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        string name;
        cin>>name;
        map<string,int>::iterator iter;
        iter = n.find(name);
        if(n.empty() == true || iter == n.end()){
            n[name] = 0;
            cout<<"OK"<<endl;
        }
        else{
            n[name]++;
            cout<<name<<n[name]<<endl;
        }
    }
    return 0;
}