#include<iostream>
#include<vector>
using namespace std;
//here have 2 approaches to move all zeroes to the end of the array
//1. using extra array
/* void moveZeroes(vector<int> &nums){
    int n= nums.size();
    int j,cnt=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
        else{
            cnt++;
        }
    }
    while(cnt>0){
        temp.push_back(0);
        cnt--;
    }
    nums = temp;
} */

//but this approach uses extra space ...its space complexity is O(n)
//we can do it in optimal way without using extra space
//2. optimal approach

void moveZeroesOptimal(vector<int> &nums){
    int i=0;
    int j=1;
    int n= nums.size();
    while(i<n && j<n){
        if(nums[i]==0 && nums[j]!=0){
            swap (nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[i]!=0){
            i++;
            j++;
        }
        else{
            j++;
        }
}
}

int main(){
vector<int> nums ={0,1,3,0,3,2,0,4,5};
cout<<"Original Array: "<<"[0,1,3,0,3,2,0,4,5]"<<endl;
moveZeroesOptimal (nums);
cout<<endl<<"Array after moving zeroes to the end using optimal approach: ";
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
}