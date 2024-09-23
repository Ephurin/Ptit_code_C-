#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int a[n+1]={0};
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		a[tmp]=a[tmp-1]+1;
	}
	cout << n-*max_element(a+1,a+n+1);
}
int main(){
	solve();
	return 0;
}
