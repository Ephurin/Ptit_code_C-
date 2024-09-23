#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	queue<string> q;q.push("1");
	int cnt=0;
	while(1){
		string tmp=q.front();q.pop();
		if(tmp.length()>s.length()||(tmp.length()==s.length()&&tmp>s)) break;
		else cnt++;
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
