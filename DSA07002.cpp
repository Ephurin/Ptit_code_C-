#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;int n,t;
	cin >> t;
	vector<int> v;
	while(t--){
		cin >> s;
		if(s=="PUSH"){
			cin >> n;
			v.push_back(n);
		}
		else if(s=="POP"){
			if(!v.empty())v.pop_back();
		}
		else if(s=="PRINT"){
			if(v.empty()) cout << "NONE" << endl;
			else{
				cout << v[v.size()-1] << endl;
			}
		}
	}
}
int main(){
	solve();
	return 0;
}
