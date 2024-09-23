#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		int tmp=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[tmp]) tmp=j;
		}
		swap(a[i],a[tmp]);
		cout << "Buoc " << i+1 << ": ";
		for(int j=0;j<n;j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
