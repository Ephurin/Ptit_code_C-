#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<vector<int> > val;
int a[20],tmp;
void nextcomb(int a[],int l,int n,int k){
	if(tmp==k){
		val.push_back(v);
		sort(val[val.size()-1].begin(),val[val.size()-1].end());
	}
	for(int i=l;i<n;i++){
		v.push_back(a[i]);tmp+=a[i];
		nextcomb(a,i+1,n,k);
		v.pop_back();tmp-=a[i];
	}
}
void solve(){
	int n,k;cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	tmp=0;
	v.clear();
	val.clear();
	nextcomb(a,0,n,k);
	sort(val.begin(),val.end());
	for(int i=0;i<val.size();i++){
		cout << "[";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j];
			if(j<val[i].size()-1) cout << " ";
		}
		cout << "]" << " ";
	}
	if(val.empty()) cout << -1;
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
