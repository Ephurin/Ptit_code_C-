#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],s[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		s[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]) s[i]=max(s[i],s[j]+1);
		}
	}
	cout << n-*max_element(s,s+n) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
