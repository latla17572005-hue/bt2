#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(auto &x:a){
		cin>>x;
	}
	vector<int>ans;// lưu dãy con
	ans.push_back(a[0]);// phần tử đầu tiên mảng a đc đưa vào dãy con
	for(int i=1;i<n;i++){
		auto it =upper_bound(ans.begin(),ans.end(),a[i]-1);// tìm vị trí đầu tiên trong vector ans mà giá trị lớn hơn a[i]-1
		if(it==ans.end()){//nếu ko tìm thấy
			ans.push_back(a[i]);
		}
		else *it=min(*it,a[i]);// nếu tìm thấy thay thế giá trị tại "vị trí" tìm đc thành a[i] để giữ cho dãy con tăng có giá trị nhỏ nhất tại vị trí đó.
	}
	cout<<ans.size()<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}