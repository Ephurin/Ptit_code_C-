#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;cin >> n >> m;
	map<int, int> mp;
	for(int i=0;i<n+m;i++){
		int tmp;cin >> tmp;
		mp[tmp]++;
	}
	for(auto i : mp){
		cout << i.first << " ";
	}
	cout << endl;
	for(auto i : mp){
		if(i.second>=2){
			cout << i.first << " ";
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
