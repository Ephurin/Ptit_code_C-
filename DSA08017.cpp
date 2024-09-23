#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	queue<string> q;
	stack<string> st;
	q.push("6");q.push("8");
	while(1){
		string tmp=q.front();q.pop();
		if(tmp.length()>n) break;
		st.push(tmp);
		q.push(tmp+"6");
		q.push(tmp+"8");
	}
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
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
