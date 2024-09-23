#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	string s;cin >> s;
	int a[106];
	for(int i=0;i<n;i++){
		if(s[i]=='X') a[i]=0;
		else if(s[i]=='T') a[i]=1;
		else if(s[i]=='D') a[i]=2;
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		int tmp=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<=a[tmp]) tmp=j;
		}
		swap(a[i],a[tmp]);
		if(a[tmp]!=a[i]) ans++;
	}
	cout << ans << endl;
}
int main(){
	solve();
	return 0;
}
