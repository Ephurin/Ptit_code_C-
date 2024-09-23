#include<bits/stdc++.h>
using namespace std;
int n,a[100],isOK;
bool valid(int a[]){
	if(a[1]==0) return false;
	if(a[n]==1) return false;
	for(int i=1;i<n;i++){
		if(a[i]==1&&a[i+1]==1) return false;
	}
	for(int i=1;i<n-2;i++){
		if(a[i]==0&&a[i+1]==0&&a[i+2]==0&&a[i+3]==0) return false;
	}
	return true;
}
void next(){
	int i=n;
	while(i>=0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) isOK=0;
	else a[i]=1;
}
void solve(){
    cin >> n;
    if(n<6) return;
	for(int i=1;i<=n;i++) a[i]=0;
	isOK=1;
	while(isOK){
		if(valid(a)){
			for(int i=1;i<=n;i++){
				if(a[i]==0) cout << 6;
				else cout << 8;
			}
			cout << endl;
		}
		next();
	}	
}
int main(){
	solve();
	return 0;
}
