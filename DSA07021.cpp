#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	int ans=0;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
            if(st.empty()){
			}
			else if(st.top()=='('){
				st.pop();
				ans+=2;
			}
			else st.push(s[i]);
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
