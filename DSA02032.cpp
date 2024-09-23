#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<vector<int> > val;
void Try(int a[],int l,int n,int k,int sum){
	if(l==n) return;
	if(sum==k){
		val.push_back(v);
		return;
	}
	if(sum>k) return;
	for(int i=l;i<n;i++){
		sum+=a[i];
		v.push_back(a[i]);
		Try(a,i,n,k,sum);
		sum-=a[i];
		v.pop_back();
	}
}
void solve(){
	int n,k;cin >> n >> k;
	int a[n];v.clear();val.clear();
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	Try(a,0,n,k,0);
	if(val.empty()){
		cout << -1 << endl;
		return;
	}
	cout << val.size() << " ";
	for(int i=0;i<val.size();i++){
		cout << "{";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j];
			if(j!=val[i].size()-1) cout << " ";
		}
		cout << "} ";
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
