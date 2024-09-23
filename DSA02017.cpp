#include<bits/stdc++.h>
using namespace std;
int a[20],f[9][9],maxn;
bool ok(int x,int b){
	for(int i=1;i<x;i++){
		if(a[i]==b||abs(i-x)==abs(a[i]-b)) return false;
	}
	return true;
}
void Try(int i,int sum){
	for(int j=1;j<=8;j++){
		if(ok(i,j)){
			a[i]=j;sum+=f[i][j];
			if(i==8) maxn=max(maxn,sum);
			else Try(i+1,sum); 
			sum-=f[i][j];
		}
	}
}
void solve(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin >> f[i][j];
		}
	}
	maxn=0;
	Try(1,0);
	cout << maxn << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
