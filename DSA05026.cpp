#include<bits/stdc++.h>
using namespace std;
void solve(){
	int c,n;cin >> c >> n;
	int a[n],f[c+1]={0};
	f[0]=1;
	for(int i=0;i<n;i++){
		cin >> a[i];
		for(int j=c;j>=a[i];j--){
			if(f[j-a[i]]==1) f[j]=1;
		}
	}
	for(int i=c;i>=0;i--){
		if(f[i]==1) {
			cout << i;
		    return;
		}
	}
} 
int main(){
	solve();
	return 0;
}
