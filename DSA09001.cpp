#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,s;cin >> n >> s;
	vector<int> v;
	vector<vector<int> > val(n,v);
	while(s--){
		int a,b;cin >> a >> b;
		val[a-1].push_back(b);
		val[b-1].push_back(a);
	}
	for(int i=0;i<n;i++){
		sort(val[i].begin(),val[i].end());
		cout << i+1 << ": ";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
