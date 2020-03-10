#include<iostream>
using namespace std;
int main() {
	int n,i,j,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	    if(i==1||i==n){
	        for(int j=1;j<=n;j++)
	        cout<<"*";
	    }
	    else if(i==2 || i==n-1){
	        for(int j=1;j<=n;j++){
	            if(j==(n+1)/2)
	            cout<<" ";
	            else
	            cout<<"*";
	        }
	    }
	    else if(i==(n+1)/2){
	        cout<<"*";
	        int j=1;
	        while(j<n-1){
	            cout<<" ";
	            j++;
	        }
	        cout<<"*";
	    }
	    else{
	        for(int j=1;j<=n;j++){
	            if(j==((n+1)/2)-1 || j==(n+1)/2 || j==((n+1)/2)+1)
	            cout<<" ";
	            else
	            cout<<"*";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
