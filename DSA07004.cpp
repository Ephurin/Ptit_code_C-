#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			if(st.empty()) st.push(s[i]);
			else if(st.top()=='(') st.pop();
			else st.push(s[i]);
		}
	}
	int ans=0;
	while(!st.empty()){
		char c1,c2;
		c2=st.top();st.pop();
		c1=st.top();st.pop();
		if((c1=='('&&c2=='(')||(c1==')'&&c2==')')) ans++;
		else ans+=2;
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
