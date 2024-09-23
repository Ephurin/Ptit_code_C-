#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<int> st;
	for(int i=0;i<s.length();i++){
		int tmp;
		if(s[i]>='0'&&s[i]<='9'){
			tmp=s[i]-'0';
			st.push(tmp);
		}
		else{
			int x=st.top();st.pop();
			int y=st.top();st.pop();
			if(s[i]=='+') tmp=y+x;
			else if(s[i]=='-') tmp=y-x;
			else if(s[i]=='*') tmp=y*x;
			else if(s[i]=='/') tmp=y/x;
			st.push(tmp);
		}
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
