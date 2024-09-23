#include<bits/stdc++.h>
using namespace std;
int a[100],n,isOK;
void next(){
	int i=n-1;
	while(i>=1&&a[i+1]<a[i]){
		i--;
	} 
	if(i==0) isOK=0;
	else{
		int tmp=i+1;
		for(int j=i+1;j<=n;j++){
			if(a[tmp]>a[j]&&a[j]>a[i]) tmp=j;
		}
		swap(a[i],a[tmp]);
		reverse(a+i+1,a+n+1);
	}
}
void solve(){
	cin >> n;
	isOK=1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	while(isOK){
		for(int i=1;i<=n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
		next();
	}
	cout << endl;
}
int main(){
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
