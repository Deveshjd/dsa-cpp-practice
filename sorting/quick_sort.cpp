#include <iostream>
using namespace std;

void swap(int &x,int &y){
  int temp=x;
  x=y;
  y=temp;
}

int partition(int arr[], int low, int high){
  int pivotElement = arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i]<=pivotElement && i<=high){ i++; }
    while(arr[j]>=pivotElement && j>=low){ j--; }
    if(i<j){
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[low],arr[j]);
  return j;
}

void quickSort(int arr[], int low, int high){
  if(low<high){
    int partitionIndex = partition(arr,low,high);
    quickSort(arr, low, partitionIndex-1);
    quickSort(arr, partitionIndex+1, high);
  }
}

int main() 
{int n; cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int low=0; int high=n-1;
quickSort(arr,low,high);
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}