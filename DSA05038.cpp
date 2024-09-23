#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n+1],f1[n+1],f2[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i];
		f1[i]=f2[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) f1[i]=max(f1[i],f1[j]+1);
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-1;j>i;j--){
			if(a[i]>a[j]) f2[i]=max(f2[i],f2[j]+1);
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,f1[i]+f2[i]);
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0; 
}
