#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;cin >> n >> k;
	int cnt=0;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		if(tmp==k) cnt++;
	}
	if(cnt==0) cnt=-1;
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
