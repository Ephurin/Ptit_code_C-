#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
	int *a=new int[1000000000];
	a[0]=0;a[1]=1;
	for(int i=2;i<1000000000;i++) a[i]=(a[i-1]+a[i-2])%mod;
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		cout << a[n] << endl;
	}
	delete []a;
	return 0;
} 
