#include<bits/stdc++.h>
using namespace std;
vector<int> x,y;
vector<vector<int> > val;
void next(){
	val.push_back(x);
	if(x.size()==1) return;
	for(int i=0;i<x.size()-1;i++){
		y.push_back(x[i]+x[i+1]);
	}
	x=y;y.clear();
	next();
}
void solve(){
	int n;cin >> n;
	x.clear();y.clear();
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		x.push_back(tmp);
	}
	val.clear();
	next();
	for(int i=val.size()-1;i>=0;i--){
		cout << "[";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j];
			if(j!=val[i].size()-1) cout << " ";
		}
		cout << "] ";
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
