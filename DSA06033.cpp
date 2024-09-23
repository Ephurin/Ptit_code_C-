#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].first;
		a[i].second=i;
	}
	sort(a,a+n);
	int ans=-1,pf=a[0].first,ps=a[0].second;
	for(int i=1;i<n;i++){
		if(a[i].first>pf){
			ans=max(ans,a[i].second-ps);
		}
		if(a[i].second<ps){
			pf=a[i].first;
			ps=a[i].second;
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
