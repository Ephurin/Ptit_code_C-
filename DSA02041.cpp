#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	queue<pair<int,int> > q;
	q.push({n,0});
	while(!q.empty()){
		int a=q.front().first,b=q.front().second;
		if(a==1){
			cout << b << endl;
			return;
		} 
		q.pop();
		if(a%3==0){
			q.push({a/3,b+1});
		}
		if(a%2==0){
			q.push({a/2,b+1});
		}
		q.push({a-1,b+1});
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
