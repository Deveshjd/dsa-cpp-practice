//code for finding the highest and lowest frequency of elements in a array

#include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
	int n;//no. of elements
	cin>>n;
	int arr[n];
	unordered_map<int , int> mpp;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    mpp[arr[i]]++;
	}
	int min=1,max=1;
	for(int i=0;i<n;i++){
	    if(mpp[arr[i]]>=max){
	        max=mpp[arr[i]];
	    }
	    if(mpp[arr[i]]<min){
	        min=mpp[arr[i]];
	    }
	}
	cout<<"Maximum frequency :"<<max<<"  "<<"Minimum frequency :"<<min<<endl;
	for(auto it : mpp){
	    cout<<it.first<<"->"<<it.second<<endl;
	}

}
