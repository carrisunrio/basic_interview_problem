#include<iostream>
using namespace std;
int main() {
	int n,rem=0,c,count=0;
	cin>>n;
	cin>>c;
	while(n>0){
		rem=n%10;
		if(rem==c){
			count++;
		}
		n=n/10;
	}
	cout<<count;
	return 0;
}
