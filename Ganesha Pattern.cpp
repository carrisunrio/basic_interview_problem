#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	//first
	cout<<"*";
	for(int i=1;i<=(n-3)/2;i++)
	cout<<" ";
	
	for(int i=1;i<=(n+1)/2;i++)
	cout<<"*";
	cout<<endl;
	//second
	for(int i=1;i<=(n-3)/2;i++){
		cout<<"*";
		for(int i=1;i<=(n-3)/2;i++)
		cout<<" ";
		
		cout<<"*"<<endl;
	}
	//third
	for(int i=1;i<=n;i++){
		cout<<"*";
	}
	cout<<endl;
    //fourth
     for(int i=1;i<=(n-3)/2;i++){
	    for(int i=1;i<=(n-3)/2+1;i++)
	    cout<<" ";
	
		cout<<"*";
		for(int i=1;i<=(n-3)/2;i++)
		cout<<" ";
		
		cout<<"*"<<endl;
	}
	
	//fifth
	for(int i=1;i<=(n+1)/2;i++)
	cout<<"*";
	
	for(int i=1;i<=(n-3)/2;i++)
	cout<<" ";
	
	cout<<"*"<<endl;
	return 0;
}
