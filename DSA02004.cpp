#include<bits/stdc++.h>
using namespace std;
int a[10][10],n;
vector<string> v;
string s;
void move(int i,int j,string s){
	if(i==n&&j==n){
		v.push_back(s);
		return;
	}
	if(a[i][j+1]==1&&i>=1&&i<=n&&j>=1&&j<=n){
		a[i][j+1]=0;
		move(i,j+1,s+"R");
		a[i][j+1]=1;
	}
	if(a[i][j-1]==1&&i>=1&&i<=n&&j>=1&&j<=n){
		a[i][j-1]=0;
		move(i,j-1,s+"L");
		a[i][j-1]=1;
	}
	if(a[i+1][j]==1&&i>=1&&i<=n&&j>=1&&j<=n){
		a[i+1][j]=0;
		move(i+1,j,s+"D");
		a[i+1][j]=1;
	}
	if(a[i-1][j]==1&&i>=1&&i<=n&&j>=1&&j<=n){
		a[i-1][j]=0;
		move(i-1,j,s+"U");
		a[i-1][j]=1;
	}
}
void solve(){
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	s="";v.clear();
	if(a[1][1]==0||a[n][n]==0){
		cout << -1 << endl;
		return;
	}
	a[1][1]=0;
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
