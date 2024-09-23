#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i==0) b[i]=a[i];
		else if(i==1) b[i]=max(a[i],a[i-1]);
		else b[i]=max(b[i-1],b[i-2]+a[i]);
	}
	cout <<  *max_element(b,b+n) << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
