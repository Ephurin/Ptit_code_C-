#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
void solve(){
	string x,y;cin >> x;
	y=x;
	reverse(y.begin(),y.end()); 
	memset(a,0,sizeof(a));
	int maxs=0;
	for(int i=1;i<=x.length();i++){
		for(int j=1;j<=y.length();j++){
			if(x[i-1]==y[j-1]) a[i][j]=a[i-1][j-1]+1;
			maxs=max(maxs,a[i][j]);
		}
	}
	cout << maxs << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
