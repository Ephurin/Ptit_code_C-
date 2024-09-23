#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int ans;
bool cmp(int a,int b){
	return a>b;
}
void nextcomb(int a[],int l,int n,int k,int tmp){
	if(tmp>k||v.size()>ans) return;
	if(tmp==k){
		int l=v.size();
		ans=min(ans,l);
	}
	for(int i=l;i<n;i++){
		v.push_back(a[i]);
		nextcomb(a,i+1,n,k,tmp+a[i]);
		v.pop_back();
	}
}
void solve(){
	int n,k;cin >> n >> k;
	int a[n];sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	v.clear();ans=999999;
	nextcomb(a,0,n,k,0);
    if(ans==999999) cout << -1 << endl;
    else cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
