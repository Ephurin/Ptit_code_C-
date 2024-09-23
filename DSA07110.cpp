#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='{'||s[i]=='['||s[i]=='(') st.push(s[i]);
		else if(!st.empty()){
			if(s[i]=='}'&&st.top()=='{') st.pop();
			if(s[i]==')'&&st.top()=='(') st.pop();
			if(s[i]==']'&&st.top()=='[') st.pop();
		}
	}
	if(st.empty()) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	int t;cin>> t;
	while(t--){
		solve();
	}
	return 0;
}
