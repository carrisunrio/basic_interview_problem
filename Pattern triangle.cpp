#include<iostream>
using namespace std;
//1.rows
//2.spaces
//3.increasing numbers
//4.decreasing numbers
int main() {
	int n;
	cin>>n;
	//rows
	for(int i=1;i<=n;i++){
		//spaces
		for(int space=1;space<=(n-i);space++)
		cout<<" ";

		//increasing numbers
		int val=i;
		for(int count=1;count<=i;count++){
			cout<<val;
			val=val+1;
		}
		//decreasing numbers
		val=val-2;
		for(int count=1;count<=i-1;count++){
			cout<<val;
			val=val-1;
		}
		cout<<endl;
	}
	return 0;
}
