#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;cin >> s;
	int n=s.length();
	s="#"+s;
	long long a[50];
	memset(a,0,sizeof(a));
	a[0]=1;
	for(int i=1;i<=n;i++){
		if(s[i]=='0'){
			if(i==1||(s[i-1]!='1'&&s[i-1]!='2')){
				cout << 0 << endl;
	            return;
			}
			else a[i]=a[i-2];
		}
		else{
			a[i]=a[i-1];
			if(i>=2&&(s[i-1]=='1'||(s[i-1]=='2'&&s[i]<='6'))) a[i]+=a[i-2];
		}
	}
	cout << a[n] << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
