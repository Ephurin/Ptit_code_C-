#include<bits/stdc++.h>
using namespace std;
int cnt(int x,int y[],int m,int a[]){
	if(x==0) return 0;
	if(x==1) return a[0];
	int* it=upper_bound(y,y+m,x);
	int ans=(y+m)-it;
	ans+=(a[0]+a[1]);
	if(x==2) ans-=(a[3]+a[4]);
	if(x==3) ans+=a[2];
	return ans;
}
void solve(){
	int n,m;cin >> n >> m;
	int x[n],y[m],a[5]={0};
	for(int i=0;i<n;i++) cin >> x[i];
	for(int i=0;i<m;i++){
		cin >> y[i];
		if(y[i]<5) a[y[i]]++;
	}
	sort(y,y+m);
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=cnt(x[i],y,m,a);
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
