#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void next(){
	for(int i=n-1;i>0;i--){
		if(a[i-1]<a[i]){
			int tmp=n-1;
			for(int j=n-1;j>=i;j--){
				if(a[j]>a[i-1]&&a[j]<a[tmp]){
					tmp=j;
				}
			}
			swap(a[i-1],a[tmp]);
			reverse(a+tmp+1,a+n);
			return;
		}
	}
	reverse(a,a+n);
}
void solve(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	next();
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
