#include<bits/stdc++.h>
using namespace std;
bool cmp(int a[],int b[],int n){
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void solve(){
	int n,k;cin >> n >> k;
	int in[n+1],out[n+1];
	memset(in,0,sizeof(in));
	memset(out,0,sizeof(out));
	for(int i=0;i<k;i++){
		int a,b;cin >> a >> b;
		out[a]++;in[b]++;
	}
	if(cmp(in,out,n)) cout << 1 << endl;
	else cout << 0 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
