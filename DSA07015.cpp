#include<bits/stdc++.h>
using namespace std;
long long conv_to_number(string s){
	int tmp=0;
	for(int i=0;i<s.length();i++){
		tmp*=10;
		tmp+=s[i]-'0';
	}
	return tmp;
}
int prio(string c){
	if(c=="^") return 4;
	else if(c=="*"||c=="/") return 3;
	else if(c=="+"||c=="-") return 2;
	return 1;
}
void solve(){
	string s;cin >> s;
	vector<string> v;
	for(int i=0;i<s.length();i++){
		string tmp="";
		if(isdigit(s[i])){
			if(v.empty()){
				tmp+=s[i];
				v.push_back(tmp);
			}
			else{
				int k=v.size()-1;
				if(isdigit(v[k][0])){
					tmp=v[k];
					v.pop_back();
					tmp+=s[i];
					v.push_back(tmp);
				}
				else{
					tmp+=s[i];
			        v.push_back(tmp);
				} 				
			}
		}
		else{
			tmp+=s[i];
			v.push_back(tmp);
		}
	}
	vector<string> st;
	stack<string> stt;
	for(int i=0;i<v.size();i++){
		if(v[i]=="(") stt.push(v[i]);
		else if(v[i]==")"){
			while(stt.top()!="("){
				st.push_back(stt.top());
				stt.pop();
			}
			stt.pop();
		} 
		else if(v[i]=="+"||v[i]=="-"||v[i]=="*"||v[i]=="/"||v[i]=="^"){
			while(!stt.empty()&&prio(stt.top())>=prio(v[i])){
				st.push_back(stt.top());
				stt.pop();
			}
			stt.push(v[i]);
		}
		else st.push_back(v[i]);
	}
	while(!stt.empty()){
		if(stt.top()!="("){
			st.push_back(stt.top());
			stt.pop();
		}
	}
	stack<long long> k;
	for(int i=0;i<st.size();i++){
		if(isdigit(st[i][0])){
			long long tmp=conv_to_number(st[i]);
			k.push(tmp);
		}
		else{
			long long a,b,tmp;
			if(st[i]=="+"){
				b=k.top();k.pop();
				a=k.top();k.pop();
				tmp=a+b;
			}
			else if(st[i]=="-"){
				b=k.top();k.pop();
				a=k.top();k.pop();
				tmp=a-b;
			}
			else if(st[i]=="*"){
				b=k.top();k.pop();
				a=k.top();k.pop();
				tmp=a*b;
			}
			else if(st[i]=="/"){
				b=k.top();k.pop();
				a=k.top();k.pop();
				tmp=a/b;
			}
			k.push(tmp);
		}
	}
	cout << k.top() << endl;
}
int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
