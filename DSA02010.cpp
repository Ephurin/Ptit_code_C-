#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<vector<int> > val;
void nextcomb(int a[],int l,int n,int k,int tmp){
	if(tmp>k) return;
	if(tmp==k){
		sort(v.begin(),v.end());
		val.push_back(v);
	}
	for(int i=l;i<n;i++){
		v.push_back(a[i]);
		nextcomb(a,i,n,k,tmp+a[i]);
		v.pop_back();
	}
}
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	v.clear();val.clear();
	nextcomb(a,0,n,k,0);
	sort(val.begin(),val.end());
	if(val.empty()){
		cout << -1 << endl;
		return;
	}
	for(int i=0;i<val.size();i++){
		cout << "[";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j];
			if(j!=val[i].size()-1) cout << " ";
		}
		cout << "]";
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
