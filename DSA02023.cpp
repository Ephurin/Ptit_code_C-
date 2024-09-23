#include<bits/stdc++.h>
using namespace std;
vector<string> v;
vector<vector<string> > val;
void comb(vector<string> s,int l,int k){
	if(v.size()==k){
		val.push_back(v);
		sort(val[val.size()-1].begin(),val[val.size()-1].end());
	}
	for(int i=l;i<s.size();i++){
		v.push_back(s[i]);
		comb(s,i+1,k);
		v.pop_back();
	}
}
void solve(){
	set<string> s;
	int n,k;cin >> n >> k;
	for(int i=0;i<n;i++){
		string tmp;cin >> tmp;
		s.insert(tmp);
	}
	vector<string> s1(s.begin(),s.end());
	v.clear();val.clear();
	comb(s1,0,k);
	sort(val.begin(),val.end());
	for(int i=0;i<val.size();i++){
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
