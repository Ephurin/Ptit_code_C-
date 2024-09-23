#include<bits/stdc++.h>
using namespace std;
long long f[55];
void prep(){
	f[1]=1;
	for(int i=2;i<54;i++){
		f[i]=f[i-1]*2;
	}
}
void solve(){
	long long n,k;cin >> n >> k;
	for(int i=n;i>=1;i--){
		if(k>f[i]) k-=f[i];
		else if(k==f[i]){
			cout << i << endl;
			return;
		}
	}
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
