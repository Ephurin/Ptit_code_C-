#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],b[n-1];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		cin >> b[i];
	}
	int anw=n;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			anw=i+1;
			break;
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
