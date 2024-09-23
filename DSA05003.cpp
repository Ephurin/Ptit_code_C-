#include<bits/stdc++.h>
using namespace std;
int f[101][101][101];
void solve(){
	int a,b,c,res=0;cin >> a >> b >> c;
	string x,y,z;cin >> x >> y >> z;
	memset(f,0,sizeof(f));
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				if(x[i-1]==y[j-1]&&y[j-1]==z[k-1]){
					f[i][j][k]=f[i-1][j-1][k-1]+1;
				}
				else f[i][j][k]=max({f[i-1][j][k],f[i][j-1][k],f[i][j][k-1]});
				res=max(res,f[i][j][k]);
			}
		}
	}
	cout << res << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
