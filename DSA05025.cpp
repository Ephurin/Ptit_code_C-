#include<bits/stdc++.h>
using namespace std;
long long a[51];
void prep(){
	a[1]=1;a[2]=2;a[3]=4;
	for(int i=4;i<=50;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
}
void solve(){
	int n;cin >> n;
	cout << a[n] << endl;
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
