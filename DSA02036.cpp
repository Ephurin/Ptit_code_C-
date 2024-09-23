#include<bits/stdc++.h>
using namespace std;
int a[20];
vector<int> v;
vector<vector<int> > val;
void nextcomb(int a[],int l,int n,int cnt){
	for(int i=l;i<n;i++){
		v.push_back(a[i]);cnt+=a[i];
		if(cnt%2==1) val.push_back(v);
		nextcomb(a,i+1,n,cnt);
		v.pop_back();cnt-=a[i];
	}
}
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	int n;cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	v.clear();val.clear();
	nextcomb(a,0,n,0);
	for(int i=0;i<val.size();i++){
		sort(val[i].begin(),val[i].end(),cmp);
	}
	sort(val.begin(),val.end());
	for(int i=0;i<val.size();i++){
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
