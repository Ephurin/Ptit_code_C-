#include<bits/stdc++.h>
using namespace std;
vector<string> v;
vector<vector<string> > val;
int n,k;
void next(vector<string> a,int l){
	if(v.size()==k){
		val.push_back(v);
		return;
	}
	if(l==a.size()) return;
	for(int i=l;i<a.size();i++){
		v.push_back(a[i]);
		next(a,i+1);
		v.pop_back();
	}
}
void solve(){
	cin >> n >> k;
	set<string> s;
	for(int i=0;i<n;i++){
		string tmp;cin >> tmp;
		s.insert(tmp);
	}
	vector<string> a(s.begin(),s.end());
	next(a,0);
	for(int i=0;i<val.size();i++){
		for(int j=0;j<k;j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
