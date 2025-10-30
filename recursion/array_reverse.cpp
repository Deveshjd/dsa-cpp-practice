#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArr(int i, vector<int>& arr, int n){
    if (i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    reverseArr(i + 1, arr, n);
}

int main(){
    int n;
    if (!(cin >> n)) return 0;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    reverseArr(0, arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i + 1 < n) cout << ' ';
    }
    cout << '\n';
    return 0;
}