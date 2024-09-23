#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n,k,isOK;
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0) isOK=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
void solve(){
	cin >> n >> k;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=1;i<=k;i++){
		cin >> a[i];b[i]=a[i];
	}
	isOK=1;
	sinh();int cnt=0;
	for(int i=1;i<=k;i++){
		if(binary_search(b+1,b+k+1,a[i])==false) cnt++;
	}
	if(isOK==0){
		cout << k << endl;
		return;
	} 
	cout << cnt << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
