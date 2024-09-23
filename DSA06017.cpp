#include<bits/stdc++.h>
using namespace std;
void solve(){
	int m,n;cin >> m >> n;
	int k=m+n;
	int a[k];
	for(int i=0;i<k;i++){
		cin >> a[i];
	}
	sort(a,a+k);
	for(int i=0;i<k;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
