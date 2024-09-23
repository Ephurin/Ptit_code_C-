#include<bits/stdc++.h>
using namespace std;
bool divided(string s,int n){
	int tmp=0;
	for(int i=0;i<s.length();i++){
		tmp=tmp*10+s[i]-'0';
		tmp%=n;
	}
	return tmp==0;
}
void solve(){
	int n;cin >> n;
	queue<string> q;q.push("1");
	int cnt=0;
	while(1){
		string tmp=q.front();q.pop();
		if(divided(tmp,n)){
			cout << tmp << endl;
			return;
		}
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
