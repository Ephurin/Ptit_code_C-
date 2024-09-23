#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
void solve(){
	priority_queue< long long,vector<long long>,greater<long long> > pq;
	int n;cin >> n;
	long long anw=0;
	for(int i=0;i<n;i++){
		long long tmp;cin >> tmp;
		pq.push(tmp);
	}
	while(pq.size()>=2){
		long long x=pq.top();pq.pop();
		long long y=pq.top();pq.pop();
		anw+=(x+y)%mod;anw%=mod;
		pq.push((x+y)%mod);
	}
	cout << anw << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
