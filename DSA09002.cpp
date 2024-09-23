#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;cin.ignore();
	int k=1;
	vector<pair<int,int> > v;
	while(k<=n){
		string s;getline(cin,s);
		stringstream ss(s);
		int tmp;
		while(ss >> tmp){
			if(tmp>k) v.push_back({k,tmp});
		}
		k++;
	}
	for(int i=0;i<v.size();i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
}
int main(){
	solve();
	return 0;
}
