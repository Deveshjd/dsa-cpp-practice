//right rotate the array by k places (k>0)

#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;
//one approach is like this
//we can rotate the array by k places by taking the last element and shifting all elements

/* void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    while(k>0){
    int temp = nums[size-1];
    for(int i=size-1;i>0;i--){
        nums[i] = nums[i-1];
    }
    nums[0] = temp;
    k=k-1;}
} */

//but this approach is not afficeint ...its time complexity is O(n*k) where n is the size of the array
//we can do it in O(n) time complexity using reverse method


void rotate(vector<int>& nums, int k) {
int n = nums.size();
if(k>n) k = k % n; 
if(k == 0) return; // No rotation needed if k is 0 or a multiple of n
reverse(nums.begin(),nums.end());
reverse(nums.begin(),nums.begin()+k);
reverse(nums.begin()+k,nums.end());
}


int main(){
    int k;
    vector<int> nums = {1,2,3,4,5,6,7};
    cout<<"Array";
    for(int i=0; i<nums.size(); i++){
    cout<<nums[i]<<" ";}
    cout << "\nEnter the number of places to rotate the array: ";
    cin>>k;
    rotate(nums, k);
    cout << "Rotated array: ";
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
}
}