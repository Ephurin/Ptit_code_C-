#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	queue<int> q;
	while(n--){
		int k;cin >> k;
		if(k==1) cout << q.size() << endl;
		else if(k==2){
			if(q.empty()) cout << "YES" << endl;
			else cout << "NO" << endl;
		} 
		else if(k==3){
			int tmp;cin >> tmp;
			q.push(tmp);
		}
		else if(k==4){
			if(!q.empty()) q.pop();
		}
		else if(k==5){
			if(!q.empty()) cout << q.front() << endl;
			else cout << -1 << endl;
		}
		else if(k==6){
			if(!q.empty()) cout << q.back() << endl;
			else cout << -1 << endl;
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
