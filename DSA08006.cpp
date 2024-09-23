#include<bits/stdc++.h>
using namespace std;
bool divided(string s,int n){
	int tmp=0;
	for(int i=0;i<s.length();i++){
		tmp=tmp*10+s[i]-'0';
		tmp%=n;
	}
	if(tmp==0) return true;
	return false;
}
void solve(){
	int n;cin >> n;
	queue<string> q;q.push("9");
	while(true){
		string tmp=q.front();
		q.pop();
		if(divided(tmp,n)){
			cout << tmp << endl;
			return;
		}
		q.push(tmp+"0");
		q.push(tmp+"9");
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
