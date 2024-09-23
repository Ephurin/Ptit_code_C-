#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	pair<float,float> a[n];
	int f[n],ans=0;
	for(int i=0;i<n;i++){
		f[i]=1;
		cin >> a[i].first >> a[i].second;
		for(int j=0;j<i;j++){
			if(a[i].first>a[j].first && a[i].second<a[j].second&&f[i]<=f[j]) f[i]=f[j]+1;
		}
		ans=max(ans,f[i]);
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

