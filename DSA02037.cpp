#include<bits/stdc++.h>
using namespace std;
int a[20];
bool prime[10000];
vector<int> v;
vector<vector<int> > val;
void prep(){
	memset(prime,true,sizeof(prime));
	prime[0]=false;prime[1]=false;
	for(int i=2;i<10000;i++){
		if(prime[i]==true){
			for(int j=i+i;j<10000;j+=i){
				prime[j]=false;
			}
		}
	}
}
void nextcomb(int a[],int l,int n,int cnt){
	for(int i=l;i<n;i++){
		v.push_back(a[i]);cnt+=a[i];
		if(prime[cnt]==true) val.push_back(v);
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
	prep();
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
