#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin >> n;cin.ignore();
	int f[n+1][n+1];
	memset(f,0,sizeof(f));
	int k=1;
	while(k<=n){
		string s;getline(cin,s);
		stringstream ss(s);
		int tmp;
		while(ss >> tmp){
			f[k][tmp]=f[tmp][k]=1;
		}
		k++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	solve();
	return 0;
}
