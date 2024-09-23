#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	int k=n/7;
	int h=n%7;
	if(k==0){
		cout << -1 << endl;
		return;
	}
	if(h==0){
		for(int i=0;i<k;i++){
			cout << 7;
		}
		cout << endl;
		return;
	}
	while(h%4!=0&&h<=28&&k>0){
		k--;
		h+=7;
	}
	if(h%4==0){
		h/=4;
		for(int i=0;i<h;i++){
			cout << 4;
		}
		for(int i=0;i<k;i++){
			cout << 7;
		}
		cout << endl;
		return;
	}
	else cout << -1 << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
