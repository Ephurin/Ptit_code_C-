#include<bits/stdc++.h>
#define max 1000005
using namespace std;
int main(){
	bool prime[max];
    memset(prime,true,sizeof(prime));
    prime[0]=false;prime[1]=false;
    for(int i=2;i<max;i++){
	    if(prime[i]){
		    for(int j=2*i;j<max;j+=i){
			    prime[j]=false;
		    }
	    }
    }
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
	    bool check=true;
	    for(int i=2;i<=n/2;i++){
		    if(prime[i]&&prime[n-i]){
			    check=false;
			    cout << i << " " << n-i << endl;
			    break;
		    }
	    }
	    if(check) cout << -1 << endl;
	}
	return 0;
}

