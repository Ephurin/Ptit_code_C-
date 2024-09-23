#include<bits/stdc++.h>
using namespace std;
void sep(long long n,vector<int> &a){
	while(n>0){
		a.push_back(n%10);
		n/=10;
	}
	reverse(a.begin(),a.end());
}
void solve(){
	long long n,ans=0;cin >> n;
	vector<int> a;
	sep(n,a);
	for(int i=0;i<a.size();i++){
		long long tmp=a[i];
		ans+=tmp;
		for(int j=i+1;j<a.size();j++){
			tmp=tmp*10+a[j];
			ans+=tmp;
		}
	}
	cout << ans << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
