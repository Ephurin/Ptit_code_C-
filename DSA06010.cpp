#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	set<int> s;
	for(int i=0;i<n;i++){
		long long tmp;cin >> tmp;
		while(tmp>0){
			s.insert(tmp%10);
			tmp/=10;
		}
	}
	for(auto i : s) cout << i << " ";
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
