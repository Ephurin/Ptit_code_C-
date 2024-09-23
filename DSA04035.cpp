#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
long long poww(long long x, long long y) {
    if (y == 0) return 1;
    long long res = poww(x, y / 2);
    if (y % 2 == 0) return (res * res) % mod;
    return (x * ((res * res) % mod)) % mod;
}
void solve(){
	long long a,b;
	while(1){
		cin >> a >> b;
		if(a==0&&b==0) return;
		else{
			cout << poww(a,b) << endl;
		}
	}
}
int main(){
    solve();
    return 0;
}
