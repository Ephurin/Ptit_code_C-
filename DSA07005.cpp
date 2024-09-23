#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<int> st;
	vector<char> v;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			if(!v.empty()){
				if(v.back()=='-') st.push(0);
			    else st.push(1);
			}
		}
		else if(s[i]==')'){
			if(!st.empty()) st.pop();
		}
		else if(s[i]=='+'){
			if(!st.empty()){
				if(st.top()==0) s[i]='-';
			}
			v.push_back(s[i]);
		}
		else if(s[i]=='-'){
			if(!st.empty()){
				if(st.top()==0) s[i]='+';
			}
			v.push_back(s[i]);
		}
		else v.push_back(s[i]);
	}
	for(int i=0;i<v.size();i++){
		cout << v[i];
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
