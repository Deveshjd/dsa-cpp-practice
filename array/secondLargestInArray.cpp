#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3, 5, 7, 2, 8, 6, 1};
    int n = arr.size();
        int largest = arr[0];
        int secondLargest = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]>secondLargest && arr[i]!=largest){
                secondLargest = arr[i];
            }
        }
    cout << "The second largest element is: " << secondLargest << endl;

        return 0;
}