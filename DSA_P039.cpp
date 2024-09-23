#include<bits/stdc++.h>
using namespace std;
int a[100],n,ans,val[25][25];
void prep(){
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	ans=0;
}
int valsum(int val[][25]){
	int tmp=0;
	for(int i=0;i<n;i++){
		tmp+=val[i][a[i]];
	}
	return tmp;
}
void nextpermu(int l){
	if(l==n-1){
		ans=max(ans,valsum(val));
	    return;
	} 
	for(int i=l;i<n;i++){
		swap(a[i],a[l]);
		nextpermu(l+1);
		swap(a[i],a[l]);
	}
}
void solve(){
	cin >> n;
	prep();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> val[i][j];
		}
	}
	nextpermu(0);
	cout << ans << endl;
} 
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
