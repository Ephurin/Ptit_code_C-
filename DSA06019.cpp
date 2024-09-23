#include<bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int> a,pair <int,int> b){
	if(a.second==b.second) return a.first<b.first;
	return a.second>b.second;
}
void solve(){
	int n;cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		mp[tmp]++;
	}
	vector< pair<int,int> > a(mp.begin(),mp.end());
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].second;j++){
			cout << a[i].first << " ";
		}
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
