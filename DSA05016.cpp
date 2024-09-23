#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
void prep(){
	int c=10000;
	set<long long> s;
	s.insert(1);
	while(c--){
		int x=*s.begin();
		s.erase(s.begin());
		v.push_back(x);
		s.insert(x*2);
		s.insert(x*3);
		s.insert(x*5);
	}
}
void solve(){
	int n;cin >> n;
	cout << v[n-1] << endl;
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
