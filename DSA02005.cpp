#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void per(string &s,int l,int r){
	if(l==r) v.push_back(s);
	else{
		for(int i=l;i<=r;i++){
			swap(s[l],s[i]);
			per(s,l+1,r);
			swap(s[l],s[i]);
		}
	}
}
void solve(){
	string s;cin >> s;
	v.clear();
	per(s,0,s.length()-1);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout << v[i] << " ";
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
