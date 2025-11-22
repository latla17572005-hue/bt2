#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>

using namespace std;

struct SinhVien{
	string ma;
	string ten;
	string lop;
	string ns;
	float gpa;
};

string solve(int i){
	string s=to_string(i);
	while(s.size()<3){
		s='0'+s;
	}
	return "B20DCCN"+s;
}

void nhap(SinhVien *ds,int n){
	for(int i=0;i<n;i++){
		scanf("\n");
		ds[i].ma=solve(i+1);
		getline(cin,ds[i].ten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].ns);
		cin>>ds[i].gpa;
	}
}

string ChuanHoa1(string &ten){
	stringstream ss(ten);
	string res,result;
	while(ss>>res){
		res[0]=toupper(res[0]);
		for(int i=1;i<res.size();i++){
			res[i]=tolower(res[i]);
		}
		result+=res+" ";
	}
	return result;
}

string ChuanHoa2(string &ns){
	if(ns[2]!='/'){
		ns.insert(0,"0");
	}
	if(ns[5]!='/'){
		ns.insert(3,"0");
	}
	return ns;
}

void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].ten=ChuanHoa1(ds[i].ten);
		ds[i].ns=ChuanHoa2(ds[i].ns);
		cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}