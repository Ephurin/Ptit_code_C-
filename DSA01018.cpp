#include<bits/stdc++.h>
using namespace std;
int a[1005];
void sinh(int k,int n){
	int i=k;
	while(i>0&&a[i]==a[i-1]+1){
		i--;
	}
	if(i!=0) a[i]--;
	for(int j=i+1;j<=k;j++){
		a[j]=n-k+j;
	}
}
void solve(){
	int n,k;cin >> n >> k;
	for(int i=1;i<=k;i++){
		cin >> a[i];
	}
	sinh(k,n);
	for(int i=1;i<=k;i++){
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
