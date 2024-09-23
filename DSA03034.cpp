#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n1,n2,n3;cin >> n1 >> n2 >> n3;
	int a[n1],b[n2],c[n3];
	for(int i=0;i<n1;i++){
		cin >> a[i]; 
	}
	for(int i=0;i<n2;i++){
	    cin >> b[i];
	}
	for(int i=0;i<n3;i++){
		cin >> c[i];
	}
	vector<long long> v;
	int i=0,j=0,k=0;
	while(i<n1&&j<n2&&k<n3){
		if(a[i]==b[j]&&a[i]==c[k]){
			v.push_back(a[i]);i++;j++;k++;
		}
		else if(a[i]<b[j]) i++;
		else if(b[j]<c[k]) j++;
		else k++;
	}
	if(v.empty()) cout << "NO" << endl;
	else{
		for(int i=0;i<v.size();i++){
		    cout << v[i] << " ";
	    }
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
