#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n,isOK;
bool cmp(int a[],int b[],int n){
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void next(){
	int i=n-1;
	while(i>=1&&a[i+1]<a[i]){
		i--;
	} 
	if(i==0){}
	else{
		int tmp=i+1;
		for(int j=i+1;j<=n;j++){
			if(a[tmp]>a[j]&&a[j]>a[i]) tmp=j;
		}
		swap(a[i],a[tmp]);
		reverse(a+i+1,a+n+1);
		isOK++;
	}
}
void solve(){
	cin >> n;
	isOK=1;
	for(int i=1;i<=n;i++){
		a[i]=i;
		cin >> b[i];
	}
	while(1){
		if(cmp(a,b,n)){
			cout << isOK << endl;
			return;
		}
		next();
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
