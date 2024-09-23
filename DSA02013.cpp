#include<bits/stdc++.h>
using namespace std;
bool prime[1005];
vector<int> v;
vector<int> a;
set<vector<int> > val;
void prep(){
	memset(prime,true,sizeof(prime));
	prime[0]=false;prime[1]=false;
	for(int i=2;i<=1000;i++){
		if(prime[i]==true){
			for(int j=i+i;j<=1000;j+=i){
				prime[j]=false;
			}
		}
	}
	for(int i=2;i<=200;i++){
		if(prime[i]) v.push_back(i);
	}
}
void nextcomb(vector<int> v,int l,int n,int p,int s){
	if(v[l]<=p) nextcomb(v,l+1,n,p,s);
	else if(l==v.size()) return; 
	else{
		if(s<0) return;
	    if(s==0){
	    	if(a.size()==n){
	    		sort(a.begin(),a.end());
		        val.insert(a);
		        return;
			}
		    
	    }
	    for(int i=l;i<v.size();i++){
		    a.push_back(v[i]);
		    nextcomb(v,i+1,n,p,s-v[i]);
		    a.pop_back();
	    }
	}
}
void solve(){
	int n,p,s;cin >> n >> p >> s;
	a.clear();val.clear();
	nextcomb(v,0,n,p,s);
	vector<vector<int> > ans(val.begin(),val.end());
	cout << ans.size() << endl;
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	prep();
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
