#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<string> st;
	for(int i=0;i<s.length();i++){
		string tmp="";
		if(s[i]>='A'&&s[i]<='Z') tmp+=s[i];
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			string a=st.top();st.pop();
			string b=st.top();st.pop();
			tmp="("+b+s[i]+a+")";
		}
		st.push(tmp);
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
