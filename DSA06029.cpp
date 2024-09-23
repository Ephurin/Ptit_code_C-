#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >val;
void solve(){
	int n;cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		v.push_back(tmp);
		sort(v.begin(),v.end());
		val.push_back(v);
	}
	for(int i=n-1;i>=0;i--){
		cout << "Buoc " << i << ": ";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
