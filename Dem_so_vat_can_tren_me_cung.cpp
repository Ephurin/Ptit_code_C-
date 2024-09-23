#include<bits/stdc++.h>
using namespace std;
const int x[]={0,1,0,-1};
const int y[]={1,0,-1,0};
int m,n,anw=0;
vector<string> a;
void dfs(int i,int j){
	a[i][j]='.';
	for(int k=0;k<4;k++){
		if(i+x[k]<n&&i+x[k]>=0&&j+y[k]>=0&&j+y[k]<m&&a[i+x[k]][j+y[k]]=='#'){
			dfs(i+x[k],j+y[k]);
		}
	}
}
void solve(){
	cin >> n >> m;
	a.resize(n);
    for (string &x : a) cin >> x;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='#'){
				anw++;
				dfs(i,j);
			}
		}
	}
	cout << anw << endl;
}
int main(){
	solve();
	return 0;
}
