#include<bits/stdc++.h>
using namespace std;
bool valid(char s[],int n){
	for(int i=1;i<n-1;i++){
		if((s[i]=='A'||s[i]=='E')&&(s[i-1]!='A'&&s[i-1]!='E')&&(s[i+1]!='A'&&s[i+1]!='E')) return false;
	}
	return true;
}
vector<string> v;
void permu(char s[],int l,int n){   
    if(l==n-1&&valid(s,n)) v.push_back(s);  
	for(int i=l;i<n;i++){
		swap(s[l],s[i]);
		permu(s,l+1,n);
		swap(s[l],s[i]);
	}
}
void solve(){
    char a;cin >> a;
	char s[10];int cnt=0;
	for(int i='A';i<=a;i++){
		s[cnt]=i;cnt++;
	}
	v.clear();
	permu(s,0,cnt);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		for(int j=0;j<cnt;j++){
			cout << v[i][j];
		}
		cout << endl;
	}	
}
int main(){
	solve();
	return 0;
}
