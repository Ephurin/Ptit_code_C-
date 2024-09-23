#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	queue<string> q;
	q.push("1");
	while(n--){
		string tmp=q.front();q.pop();
		cout << tmp << " ";
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
