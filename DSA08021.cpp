#include<bits/stdc++.h>
using namespace std;
struct comb{
	int i,j,cnt;
};
void solve(){
	int m,n;cin >> m >> n;
	int a[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	comb v;
	v.i=1;v.j=1;v.cnt=0;
	queue<comb> q;
	q.push(v);
	while(!q.empty()){
		comb tmp=q.front();
		q.pop();
		if(tmp.i==m&&tmp.j==n){
			cout << tmp.cnt << endl;
			return;
		}
		else{
			int i=tmp.i,j=tmp.i,k=tmp.cnt+1;
			if(tmp.i+a[i][j]<=m){
				tmp.i+=a[i][j];
				tmp.cnt=k;
				q.push(tmp);
			}
			if(tmp.j+a[i][j]<=n){
				tmp.i=i;
				tmp.j+=a[i][j];
				tmp.cnt=k;
				q.push(tmp);
			}
		}
	}
	cout << -1 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
