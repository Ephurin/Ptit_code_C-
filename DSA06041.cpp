#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second>b.second;
}
void solve(){
	int n;cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		mp[tmp]++;
	}
	vector<pair<int,int> > a(mp.begin(),mp.end());
	sort(a.begin(),a.end(),cmp);
	if(a[0].second>n/2) cout << a[0].first << endl;
	else cout << "NO" << endl;
}
int main(){
	int t;cin  >> t;
	while(t--){
		solve();
	}
	return 0;
}
