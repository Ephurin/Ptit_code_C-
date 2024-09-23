#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<char> st;
	int ans=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(!st.empty()){
			if(st.top()=='('){
				st.pop();ans+=2;
			} 
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
