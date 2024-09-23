#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<string> st1;
	stack<int> st2;
	for(int i=0;i<s.length();i++){
		string tmp="";
		if(isdigit(s[i])){
			int k=0;
			while(i<s.length()&&isdigit(s[i])){
				k=k*10+s[i]-'0';
				i++;
			}
			i--;
			st2.push(k);
		}
		else if(s[i]=='['){
			tmp+=s[i];
			st1.push(tmp);
			if(!isdigit(s[i-1])||i==0){
				st2.push(1);
			}
		}
		else if(s[i]==']'){
			while(st1.top()!="["){
				tmp=st1.top()+tmp;
				st1.pop();
			}
			st1.pop();
			string res="";
			int x=st2.top();st2.pop();
			while(x--) res+=tmp;
			st1.push(res);
		}
		else{
			tmp+=s[i];
			st1.push(tmp);
		}
	}
	string ans="";
	while(!st1.empty()){
		ans=st1.top()+ans;
		st1.pop();
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
