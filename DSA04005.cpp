#include<bits/stdc++.h>
using namespace std;
long long fibo[93];
void prep(){
	fibo[0]=0;fibo[1]=1;
	for(int i=2;i<93;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
} 
void solve(){
	long long n,k;cin >> n >> k;
	while(1){
		if(n==1){
			cout << "A" << endl;
			return;
		}
	    if(n==2){
	    	cout << "B" << endl;
	    	return;
		}
		if(k>fibo[n-2]){
			k-=fibo[n-2];
			n--;
		}
		else n-=2;
	}
}
int main(){
	int t;cin >> t;
	prep();
	while(t--){
		solve();
	}
	return 0;
}
