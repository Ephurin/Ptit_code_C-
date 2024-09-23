#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool valid(vector<int> v){
	for(int i=0;i<v.size()-1;i++){
		if(v[i]>v[i+1]) return false;
	}
	return true;
}
void Try(int l,int n,int a[],int k,int &cnt){
	if(v.size()==k){
		if(valid(v)) cnt++;
		return;
	}
	if(l==n) return;
	for(int i=l;i<n;i++){
		v.push_back(a[i]);
		Try(i+1,n,a,k,cnt);
		v.pop_back();
	}
}
void solve(){
	int n,k,cnt=0;cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	Try(0,n,a,k,cnt);
	cout << cnt;
}
int main(){
	solve();
	return 0;
}
