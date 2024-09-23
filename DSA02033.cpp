#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<vector<int> > val;
bool valid(vector<int> a){
	for(int i=0;i<a.size()-1;i++){
		if(a[i]==a[i+1]+1||a[i]==a[i+1]-1) return false;
	}
	return true;
} 
void next(vector<int> &a,int l,int n){
	if(valid(a)&&l==n-1) val.push_back(a);
	for(int i=l;i<n;i++){
		swap(a[i],a[l]);
		next(a,l+1,n);
		swap(a[i],a[l]);
	}
} 
void solve(){
	int n;cin >> n;
	a.clear();val.clear();
	for(int i=1;i<=n;i++){
		a.push_back(i);
	} 
	next(a,0,n);
	sort(val.begin(),val.end());
	for(int i=0;i<val.size();i++){
		for(int j=0;j<n;j++){
			cout << val[i][j];
		}
		cout << endl;
	}
	if(val.empty()) cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
}
