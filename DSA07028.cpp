#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	stack<int> a,b;
	while(n--){
		int tmp,k=1;cin >> tmp;
		while(!a.empty()){
			if(tmp>=a.top()){
				k+=b.top();
				a.pop();b.pop();
			}
			else break;
		}
		a.push(tmp);b.push(k);
		cout << k << " ";
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
