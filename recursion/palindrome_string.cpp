#include <iostream>
#include <string>
using namespace std;

bool check(int i, const string &s, int n){
    if (i >= n/2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return check(i + 1, s, n);
}

int main(){
    string s;
    if (!(cin >> s)) return 0;
    bool isPal = check(0, s, s.length());
    cout << (isPal ? "Palindrome" : "Not palindrome") << '\n';
    return 0;
}