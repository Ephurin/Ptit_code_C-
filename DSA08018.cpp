#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	queue<string> q;
	vector<string> st;
	q.push("6");q.push("8");
	while(1){
		string tmp=q.front();q.pop();
		if(tmp.length()>n) break;
		st.push_back(tmp);
		q.push(tmp+"6");
		q.push(tmp+"8");
	}
	cout << st.size() << endl;
	for(int i=0;i<st.size();i++){
		cout << st[i] << " ";
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
