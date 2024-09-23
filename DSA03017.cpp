#include<bits/stdc++.h>
using namespace std;
int a[256];
vector<int> v;
void solve(){
	int n;cin >> n;
	string s;cin >> s;
	memset(a,0,sizeof(a));v.clear();
	for(int i=0;i<s.size();i++){
		a[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
		if(a[s[i]]>0){
		    v.push_back(a[s[i]]);
			a[s[i]]=0;	
		}
	}
	while(n--){
		sort(v.begin(),v.end());
		v[v.size()-1]--;
	}
	int ans=0;
	for(int i=0;i<v.size();i++){
		ans+=v[i]*v[i];
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
