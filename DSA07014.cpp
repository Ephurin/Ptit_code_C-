#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<int> st;
	for(int i=s.length()-1;i>=0;i--){
		int tmp;
		if(s[i]>='0'&&s[i]<='9'){
			tmp=s[i]-'0';
			st.push(tmp);
		}
		else{
			int x=st.top();st.pop();
			int y=st.top();st.pop();
			if(s[i]=='+') tmp=x+y;
			if(s[i]=='-') tmp=x-y;
			if(s[i]=='*') tmp=x*y;
			if(s[i]=='/') tmp=x/y;
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
