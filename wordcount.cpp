#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector <string> name;
	string words;
	int wordCount=1;
	
	//for entering words as input
	cout<<"Enter words::";
	while(cin>>words){
		name.push_back(words);
	}
	
	//sorting so that adjacent same words can be counted and added 
	sort(name.begin(),name.end());
	  
	int size=name.size();
	
	//if input is empty
	if(size==0){
		cout<<"nO words"<<endl;
	}
	
	int count=1;
	words=name[0];
	
	//for counting the substrings present in and counting them
	for(int i=1; i<size; i++){
		if(words!=name[i]){
			cout<<words<<" : "<<count<<"\n";
			words=name[i];
			count=0;
		}
		count++;
	}
	cout<<words<<" : "<<count<<"\n";
		
	return 0;
}
