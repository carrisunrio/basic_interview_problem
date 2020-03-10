#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=(n-i);j++)
	    cout<<" ";
	    if(i==1||i==n){
	        int j=1;
	        while(j<=n){
	            cout<<"*";
	            j++;
	        }
	    }
	    else{
	        cout<<"*";
	        int j=1;
	        while(j<=n-2){
	            cout<<" ";
	            j++;
	        }
	        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}
