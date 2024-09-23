#include<bits/stdc++.h>
using namespace std;
long long a[1000000]={1};
void prep(){
	for(int i=1;i<=1e6;i++){
		for(int j=2*i;j<=1e6;j+=i){
			a[j]+=i;
		}
	}
	a[0]=0;
	for(int i=1;i<=1e6;i++){
		if(a[i]>i) a[i]=a[i-1]+1;
		else a[i]=a[i-1];
	}
}
int main(){
	prep();
	int x,b;cin >> x >> b;
	cout << a[b] -a[x-1];
}

