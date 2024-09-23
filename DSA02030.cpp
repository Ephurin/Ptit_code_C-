#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void next(char beg,char a,int n,string s){
	if(s.length()==n){
		ans.push_back(s);
		return;
	}
	for(char i=beg;i<=a;i++){
		next(i,a,n,s+i);
	}
}
void solve(){
	char a;int n;cin >> a >> n;
	ans.clear();
	next('A',a,n,"");
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << endl;
	}
}
int main(){
	solve();
	return 0;
}
