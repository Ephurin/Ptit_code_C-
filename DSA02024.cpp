#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<vector<int> > val;
int n,a[100];
string to_string(int a){
	string tmp="";
	while(a>0){
		char c=a%10+'0';
		tmp=c+tmp;
		a/=10;
	}
	return tmp;
}
bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for(int i=0;i<a.size();i++) x += to_string(a[i]) + " ";
    for(int i=0;i<b.size();i++) y += to_string(b[i]) + " ";
    return x < y;
}
void Try(int l){
	if(v.size()>=2) val.push_back(v);
	if(l>n-1) return;
	for(int i=l;i<n;i++){
		if(v.empty()){
			v.push_back(a[i]);
			Try(i+1);
			v.pop_back();
			continue;
		}
		if(a[i]>v[v.size()-1]){
			v.push_back(a[i]);
			Try(i+1);
			v.pop_back();
		}
	}
} 
void solve(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	Try(0);
	sort(val.begin(),val.end(),cmp);
	for(int i=0;i<val.size();i++){
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
