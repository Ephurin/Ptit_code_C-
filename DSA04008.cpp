#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
void mul(ll a[2][2],ll b[2][2]){
	ll x00=(a[0][0]*b[0][0]%mod+a[0][1]*b[1][0]%mod)%mod;
	ll x01=(a[0][0]*b[0][1]%mod+a[0][1]*b[1][1]%mod)%mod;
	ll x10=(a[1][0]*b[0][0]%mod+a[1][1]*b[1][0]%mod)%mod;
	ll x11=(a[1][0]*b[0][1]%mod+a[1][1]*b[1][1]%mod)%mod;
	a[0][0]=x00;a[0][1]=x01;a[1][0]=x10;a[1][1]=x11;
}
void poww(ll a[2][2],ll b[2][2],int k){
	if(k<=1) return;
	poww(a,b,k/2);
	mul(a,a);
	if(k%2==1) mul(a,b); 
}
void solve(){
	int n;cin >> n;
	ll a[2][2]={{1,1},{1,0}},b[2][2]={{1,1},{1,0}};
	poww(a,b,n-1);
	cout << a[0][0] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
