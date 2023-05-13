#include<iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int i=0;i<T;i++){
		long long x,y;
		scanf("%lld%lld",&x,&y);
		while(x != 0 && y != 0){
			if(x<y){
				x++;
                if(x == 0 || y == 0) break;
                if(y<x){
                    y++;
                }
                else{
                    y/=2;
                }
			}
			else{
                x/=2;
                if(x == 0 || y == 0) break;
                if(y<x){
                    y++;
                }
                else{
                    y/=2;
                }
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
} 