#include<bits/stdc++.h>
using namespace std;
void solve(){
	priority_queue< int,vector<int>,greater<int> > pq;
	int n;cin >> n;
	long long anw=0;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		pq.push(tmp);
	}
	while(pq.size()>=2){
		int x=pq.top();pq.pop();
		int y=pq.top();pq.pop();
		anw+=x+y;
		pq.push(x+y);
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
