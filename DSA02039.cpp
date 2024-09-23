#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > val;
vector<int> v;
int vec_sum(vector<int> v){
	int tmp=0;
	for(int i=0;i<v.size();i++){
		tmp+=v[i];
	}
	return tmp;
}
void Try(int n){
	if(vec_sum(v)==n){
		val.push_back(v);
		return;
	}
	else if(vec_sum(v)>n) return;
	else{
		for(int i=n;i>=1;i--){
			if(v.empty()){
				v.push_back(i);
				Try(n);
				v.pop_back();
			}
			else if(v.back()>=i){
				v.push_back(i);
				Try(n);
				v.pop_back();
			}
		}
	}
}
void solve(){
	int n;cin >> n;
	val.clear();v.clear();
	Try(n);
	cout << val.size() << endl;
	for(int i=0;i<val.size();i++){
		cout << "(";
		for(int j=0;j<val[i].size();j++){
			cout << val[i][j];
			if(j!=val[i].size()-1) cout << " ";
		}
		cout << ") ";
	}
	cout << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
