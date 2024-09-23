#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		a[i]*=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			if(binary_search(a+j+1,a+n,a[i]+a[j])){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
