#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,ins,del,copy;cin >> n >> ins >> del >> copy;
	int f[n+1];
	memset(f,0,sizeof(f));
	f[1]=ins;
	for(int i=2;i<=n;i++){
		if(i%2==1){
			f[i]=min(f[i-1]+ins,min(f[(i-1)/2]+copy+ins,f[(i+1)/2]+copy+del));
		}
		else f[i]=min(f[i-1]+ins,f[i/2]+copy);
	}
	cout << f[n] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
