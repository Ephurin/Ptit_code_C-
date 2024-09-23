#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	stack<char> st1,st2;
	for(int i=0;i<s.length();i++){
		char tmp;
		if(s[i]=='<'){
			if(!st1.empty()){
				st2.push(st1.top());
				st1.pop();
			}
		}
		else if(s[i]=='>'){
			if(!st2.empty()){
				st1.push(st2.top());
				st2.pop();
			}
		}
		else if(s[i]=='-'){
			if(!st1.empty()) st1.pop();
		}
		else st1.push(s[i]);
	}
	while(!st1.empty()){
		st2.push(st1.top());
		st1.pop();
	}
	while(!st2.empty()){
		cout << st2.top();
		st2.pop();
	}
} 
int main(){
	solve();
	return 0;
}
