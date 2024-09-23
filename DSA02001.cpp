#include<bits/stdc++.h>
using namespace std;
vector<int> a,b;
void print(){
	cout << "[";
	for(int i=0;i<a.size();i++){
		cout << a[i];
		if(i!=a.size()-1) cout << " ";
	}
	cout << "]" << endl;
}
void next(int n){
	print();
	if(n==1){
		a.clear();
		return;
	}
	for(int i=0;i<a.size()-1;i++){
		b.push_back(a[i]+a[i+1]);
	}
	a=b;
	a.resize(n-1);
	b.clear();
	next(n-1);
}
void solve(){
	int n;cin >> n;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		a.push_back(tmp);
	}
	next(n);
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
