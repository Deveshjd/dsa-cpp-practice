//you are given two sorted arrays, you need to find union of these two arrays.

#include<iostream>
#include<vector>
using namespace std;

void unionFunction(vector<int>&arr1 , vector<int>&arr2 ){
    vector<int> unionVector;
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i=0, j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            if(unionVector.size()==0 || unionVector.back()!=arr1[i])
            {unionVector.push_back(arr1[i]);}
            i++;
        }
        else{
        if(unionVector.size()==0 || unionVector.back()!=arr1[j])
            {unionVector.push_back(arr1[j]);}
            j++;
        }
    }

    while (i < size1) {
        if(unionVector.size()==0 || unionVector.back()!=arr1[i])
        {unionVector.push_back(arr1[i]);}
        i++;
    }
    while (j < size2) {
        if(unionVector.size()==0 || unionVector.back()!=arr2[j])
        {unionVector.push_back(arr2[j]);}
        j++;
    }
    int size = unionVector.size();
    for(int k=0; k<size; k++){
        cout<<unionVector[k]<<" ";
    }
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {6,6,7,7,8,9,10};
    unionFunction(arr1, arr2);    
}