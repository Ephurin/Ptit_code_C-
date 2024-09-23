#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long p,q;cin >> p >> q;
	while(1){
		if(q%p==0){
			cout << "1/" << q/p << endl;
			return;
		}
		long long tmp=q/p+1;
		cout << "1/" << tmp << " + ";
		p=p*tmp-q;
		q*=tmp;
	}
} 
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
