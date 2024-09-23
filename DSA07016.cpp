#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<char> st;
	string ans="";char a='1';
	for(int i=0;i<s.length();i++){
		string tmp="";
		if(s[i]=='D') st.push(s[i]);
		else if(s[i]=='I'){
			tmp=a+tmp;a++;
			while(!st.empty()){
				tmp=a+tmp;a++;
				st.pop();
			}
		}
		ans+=tmp;
	}
	string tmp="";
	while(!st.empty()){
		tmp=a+tmp;a++;
		st.pop();
	}
	tmp=a+tmp;ans+=tmp;
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
