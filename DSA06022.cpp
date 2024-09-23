#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	set<int> a;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		a.insert(tmp);
	}
	vector<int> v(a.begin(),a.end());
	if(v.size()==1) cout << -1 << endl;
	else cout << v[0] << " " << v[1] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
