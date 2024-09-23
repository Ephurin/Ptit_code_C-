#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
void solve(){
	int n,k;cin >> n >> k;
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	for(int i=0;i<k;i++){
		int a,b;cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int d1=0,d2=0;
	for(int i=1;i<=n;i++){
		if(v[i].size()%2==0) d1++;
		else d2++;
	}
	if(d2==0) cout << 2 << endl;
	else if(d2==2) cout << 1 << endl;
	else cout << 0 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
