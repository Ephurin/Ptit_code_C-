#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > val;
void solve(){
	int n;cin >> n;
	vector<int> v;
	val.clear();
	for(int i=0;i<n;i++){
		int tmp;cin >> tmp;
		v.push_back(tmp);
	}
	bool sorted=0;
	while(!sorted){
		sorted=1;
		for(int i=0;i<n-1;i++){
			if(v[i]>v[i+1]){
				swap(v[i],v[i+1]);
				sorted=0;
			}
		}
		if(!sorted) val.push_back(v);
	}
	for(int i=val.size()-1;i>=0;i--){
		cout << "Buoc " << i+1 << ": ";
		for(int j=0;j<n;j++){
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
