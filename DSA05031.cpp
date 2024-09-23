#include<bits/stdc++.h>
using namespace std;
int a[10005]={0};
void prep(){
	for(int i=1;i*i<=10000;i++){
		a[i*i]=1;
	}
	for(int i=2;i<=10000;i++){
		if(a[i]==0) a[i]=a[i-1]+a[1];
		for(int j=2;j<=i/2;j++){
			a[i]=min(a[i],a[i-j]+a[j]);
		}
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
