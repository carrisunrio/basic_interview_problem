	#include<bits/stdc++.h>
	using namespace std;
	
		int swap(int *x,int *y)
		{
			int *temp;
			temp=x;
			x=y;
			y=temp;
		}
	
	int main()
	{
	
	    int size;
	    cout<<"Enter  size::"<<endl;
	    cin>>size;
		int arr[100];
		cout<<"Enter elements::"<<endl;
		for(int i=0; i<size; i++){
			cin>>arr[i];
		}
		
		for(int i=0; i<size; i++){
			if(i%2==0){
				if(!(arr[i]<arr[i+1]))
					swap(arr[i],arr[i+1]);
			}
				else if(!(arr[i]>arr[i+1]))
				swap(arr[i],arr[i+1]);
		}
		cout<<"result:"<<endl;
		for(int i=0; i<size; i++){
			cout<<arr[i];
		}
		return 0;
	}
