#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;
	string s;cin >> s;
	int k=0;
	while(n>0&&k<s.size()){
		int tmp=k;
		for(int i=k+1;i<s.size();i++){
			if(s[i]>=s[tmp]) tmp=i;
		}
		if(tmp!=k){
			swap(s[k],s[tmp]);
			n--;
		}
		k++;
	}
	cout << s << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
