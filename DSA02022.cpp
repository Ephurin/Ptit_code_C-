#include<bits/stdc++.h>
using namespace std;
vector<string> v;
bool valid(string s){
	if(s[0]=='0'&&s[1]=='0') return false;
	int k=(s[2]-'0')*10+s[3]-'0';
	if(k==0||k>12) return false;
	if(s[4]=='0') return false;
	return true;
}
void next(string& s,int l){
	for(int i=l;i<s.size();i++){
		s[i]='2';
		next(s,i+1);
		s[i]='0';
	}
	if(valid(s))  v.push_back(s);
}
int main(){
	string s="00000000";
	next(s,0);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout << v[i][j];
			if(j==1||j==3) cout << "/";
		}
		cout << endl;
	}
	return 0;
}
