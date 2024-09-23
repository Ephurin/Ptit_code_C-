#include<bits/stdc++.h>
using namespace std;
int a[1005],n,k;
void sinh(){
	int i=k;
	while(i>=1&&a[i]==i-k+n){
		i--;
	}
	if(i==0){
		for(int j=1;j<=k;j++){
			a[j]=j;
		}
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
void solve(){
    cin >> n >> k;
	for(int i=1;i<=k;i++){
		cin >> a[i];
	}
	sinh();
	for(int i=1;i<=k;i++) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
