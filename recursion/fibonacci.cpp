#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int n;
    cin>>n;
    int x=fibonacci(n);
    cout<<x;
    return 0;
}

//Here the time complexity is O(2^n) and space complexity is O(n) due to recursive stack
//This can be optimized using memoization or tabulation approach