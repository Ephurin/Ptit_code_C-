#include<bits/stdc++.h>
using namespace std;
void change(string s,vector<char> &v){
	stack<int> st; 
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
}
void solve(){
	string s,sl;cin >> s >> sl;
	vector<char> v1,v2;
	change(s,v1);change(sl,v2);
	int k=min(v1.size(),v2.size());
	for(int i=0;i<k;i++){
		if(v1[i]!=v2[i]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
