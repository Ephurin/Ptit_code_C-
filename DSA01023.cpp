#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],n,k,isOK;
void prep(){
	isOK=1;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
bool cmp(int a[],int b[]){
	for(int i=1;i<=k;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
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
	for(int i=1;i<=k;i++) cin >> b[i];
	prep();
	int cnt=1;
	while(isOK){
		if(cmp(a,b)){
			cout << cnt << endl;
			return;
		}
		sinh();
		cnt++;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
