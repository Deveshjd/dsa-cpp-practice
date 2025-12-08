//you are given 2 sorted arrays you have to find the intersection of those two arrays

#include<iostream>
#include<vector>
using namespace std;

void intersectionFunction(vector<int> &arr1 , vector<int> &arr2){
    int size1 = arr1.size();
    int size2 = arr2.size();
    vector<int> intersectionVector;
    int i=0, j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            intersectionVector.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    int n = intersectionVector.size();
    if(n == 0){
        cout << "No intersection found." << endl;
    } else {
        cout << "Intersection of the two arrays: ";
        for(int k=0; k<n; k++){
            cout<<intersectionVector[k]<<" ";
        }
}
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {1,5,6,7,8,8,9,10};
    intersectionFunction(arr1, arr2);
    return 0;
}