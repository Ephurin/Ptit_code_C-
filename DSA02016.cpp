#include<bits/stdc++.h>
using namespace std;
int a[20],cnt;
bool ok(int x,int b){
	for(int i=1;i<x;i++){
		if(a[i]==b||abs(i-x)==abs(a[i]-b)) return false;
	}
	return true;
}
void Try(int i,int n){
	for(int j=1;j<=n;j++){
		if(ok(i,j)){
			a[i]=j;
			if(i==n) cnt++;
			Try(i+1,n); 
		}
	}
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		cnt=0;
		Try(1,n);
		cout << cnt << endl;
	}
	return 0;
}
