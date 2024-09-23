#include<bits/stdc++.h>
using namespace std;
int a[20],k,isOK;
void prep(int n){
	isOK=1;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(int n){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0) isOK=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t=1;
	while(t--){
		int n;
		set<int> s;
		cin >> n >> k;
		for(int i=0;i<n;i++){
			int tmp;cin >> tmp;
			s.insert(tmp);
		}
		vector<int> v(s.begin(),s.end());
		n=s.size();
		prep(n);
		while(isOK==1){
			for(int i=1;i<=k;i++) cout << v[a[i]-1] << " ";
			cout << endl;
			sinh(n);
		}
		cout << endl;
	}
	return 0;
}
