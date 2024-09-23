#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<vector<int> > val;
void nextcomb(int a[],int l,int n,int k){
	if(v.size()==k){
		val.push_back(v);
		sort(val[val.size()-1].begin(),val[val.size()-1].end());
	}
	for(int i=l;i<n;i++){
		v.push_back(a[i]);
		nextcomb(a,i+1,n,k);
		v.pop_back();
	}
}
void solve(){
	int n,k;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	v.clear();
	val.clear();
	nextcomb(a,0,n,k);
	sort(val.begin(),val.end());
	for(int i=0;i<val.size();i++){
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
