#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n+1],b[n+1]={0};
	a[0]=0;
	for(int i=1;i<n+1;i++){
		cin >> a[i];
		b[i]=b[i-1]+a[i];
	}
	int anw=-99999;
	for(int i=1;i<n+1;i++){
		for(int j=0;j<i;j++){
			anw=max(anw,b[i]-b[j]);
		}
	}
	cout << anw << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
