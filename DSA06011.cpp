#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int anw=999999;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int k=a[i]+a[j];
			if(abs(k)<abs(anw)) anw=k;
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
