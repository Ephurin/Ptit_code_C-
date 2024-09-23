#include<bits/stdc++.h>
using namespace std;
void next(int x,int y,int m,int n,int &cnt){
	if(x==m&&y==n){
		cnt++;
		return;
	}
	if(x<m) next(x+1,y,m,n,cnt);
	if(y<n) next(x,y+1,m,n,cnt);
}
void solve(){
	int m,n;cin >> m >> n;int tmp;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> tmp;
		}
	}
	int cnt=0;
	next(1,1,m,n,cnt);
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
