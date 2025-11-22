#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string x,y;
		cin>>x>>y;
		if(x.size()<y.size()) swap(x,y);
		if(x.size()==y.size()){
			if(x[0]<y[0]) swap(x,y);
		}
		while(x.size()>y.size()) y.insert(0,"0");
		string s;
		int nho=0;
		for(int i=x.size()-1;i>=0;i--){
			int a=x[i]-'0';
			int b=y[i]-'0';
			int tmp=a-b-nho;
			if(tmp<0){
				tmp=tmp+10;
				nho=1;
			}
			else nho=0;
			s.push_back(tmp+'0');
		}
		reverse(s.begin(),s.end());
		cout<<s<<endl;
	}
}