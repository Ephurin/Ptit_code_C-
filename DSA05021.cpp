#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	vector< pair<int,int> > v(n);
	int f[n];
	for(int i=0;i<n;i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		f[i]=1;
		for(int j=0;j<i;j++){
			if(v[i].first>v[j].second) f[i]=max(f[i],f[j]+1);
		}
	}
	cout << *max_element(f,f+n) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
