#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	int n;cin >> n;
    vector<int> odd,even;
    for(int i=0;i<n;i++){
    	int tmp;cin >> tmp;
    	if(i%2==0) odd.push_back(tmp);
    	else even.push_back(tmp);
	}
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end(),cmp);
	for(int i=0;i<even.size();i++){
		cout << odd[i] << " " << even[i] << " ";
	}
	if(n%2==1) cout << odd[odd.size()-1];
}
int main(){
	solve();
	return 0;
}
