#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) b[i]=max(b[j]+a[i],b[i]);
		}
	}
	cout << *max_element(b,b+n) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
