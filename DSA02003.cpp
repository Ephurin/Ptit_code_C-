#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int a[11][11],n;
string s;
void move(int i,int j,string s){
	if(i==n&&j==n){
		v.push_back(s);
		return;
	}
	if(a[i][j+1]==1){
		move(i,j+1,s+"R");
	}
	if(a[i+1][j]==1){
		move(i+1,j,s+"D");
	}
}
void solve(){
	v.clear();s="";
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	if(a[1][1]==0||a[n][n]==0){
		cout << -1 << endl;
		return;
	}
	move(1,1,s);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	if(v.empty()) cout << -1;
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
