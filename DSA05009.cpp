#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
bool isOK;
void next(int a[],int l,int r,int k,int tmp,bool &isOK){
	if(isOK) return;
	if(tmp==k){
		isOK=true;
		return;
	}
	if(tmp>k) return;
	if(l==r) return;
	for(int i=l;i<r;i++){
		next(a,i+1,r,k,tmp+a[i],isOK);
	}
}
void solve(){
	int n,cnt=0;cin >> n;
	int a[n];isOK=false;
	for(int i=0;i<n;i++){
		cin >> a[i];
		cnt+=a[i];
	}
	sort(a,a+n,cmp);
	if(cnt%2==1) cout << "NO" << endl;
	else if(a[0]>cnt/2) cout << "NO" << endl;
	else{
		next(a,0,n,cnt/2,0,isOK);
		if(isOK) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
}
