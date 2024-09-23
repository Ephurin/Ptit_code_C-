#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a,b;cin >> a >> b;
	int f[100000]={0};
	queue<pair<int,int> > q;
	q.push({a,0});
	while(!q.empty()){
		pair<int,int> tmp=q.front();q.pop();
		if(tmp.first==b){
			cout << tmp.second << endl;
			return;
		}
		else if((tmp.first)*2==b||(tmp.first)-1==b){
			cout << tmp.second+1 << endl;
			return;
		}
		else{
			if(tmp.first<b&&f[tmp.first*2]==0){
			    q.push({tmp.first*2,tmp.second+1});
				f[(tmp.first)*2]=1;
			}
			if(tmp.first-1>=0&&f[tmp.first-1]==0){
				q.push({tmp.first-1,tmp.second+1});
				f[(tmp.first)-1]=1;
			}
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
