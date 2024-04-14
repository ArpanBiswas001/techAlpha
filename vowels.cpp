#include<bits/stdc++.h>
using namespace std;

bool valid(char x){
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
		return true;
	return false;
}
int solve(string s){
	int ans=0;
	for(auto x:s){
		if(valid(x)){
			ans++;
		}
	}
	return ans;
}

int main(){
	string s;
	cin.ignore();
	getline(cin,s,'\n');
	
	int ans=solve(s);
	cout<<"NUMBER OF VOWELS IN THE STRING: "<<ans;
}