#include<bits/stdc++.h>
using namespace std;
int n,k,isOK;
vector<string> val;
void next(string &s){
	int i=n-1;
	while(i>=0&&s[i]=='B'){
		s[i]='A';
		i--;
	}
	if(i==-1) isOK=0;
	else s[i]='B';
}
void solve(){
	cin >> n >> k;
	string s(n,'A'),tmp(k,'A');
	isOK=1;
	while(isOK){
		int cnt=0;
		for(int i=0;i<n-k+1;i++){
			if(s.substr(i,k).compare(tmp)==0) cnt++;
		}
		if(cnt==1) val.push_back(s);
		next(s);
	}
	cout << val.size() << endl;
	for(int i=0;i<val.size();i++) cout << val[i] << endl;
}
int main(){
	solve();
	return 0;
}
