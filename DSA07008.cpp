#include<bits/stdc++.h>
using namespace std;
int prio(char c){
	if(c=='^') return 4;
	else if(c=='*'||c=='/') return 3;
	else if(c=='+'||c=='-') return 2;
	return 1;
}
void solve(){
	string s;cin >> s;
	stack<char> st;
	string ans="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			while(st.top()!='('){
				ans+=st.top();
				st.pop();
			}
			st.pop();
		}
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
			while(!st.empty()&&prio(st.top())>=prio(s[i])){
				ans+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else ans+=s[i];
	} 
	while(!st.empty()){
		if(st.top()!='(') ans+=st.top();
		st.pop();
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
