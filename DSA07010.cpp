#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<string> st;
	for(int i=s.length();i>=0;i--){
		string tmp(1,s[i]);
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			string x=st.top();st.pop();
			string y=st.top();st.pop();
			tmp=x+y+tmp;
			st.push(tmp);
		}
		else st.push(tmp);
	}
	cout << st.top() << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
