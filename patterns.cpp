#include<iostream>
using namespace std;

/* int main(){
    int n,count=1;
    cin>>n;                      //if n=3
    for(int i=1;i<=n;i++){       //1 2 3
        for(int j=1;j<=n;j++){   //4 5 6
            cout<<count;         //7 8 9
            count++;
        }
        cout<<endl;
    }
    return 0;
} */

/* int main(){
    int n;                           //if n=3
    cin>>n;                          // *
    for(int i=0;i<n;i++){            // * *
      for(int j=0;j<=i;j++){         // * * *
        cout<<" * ";
    }
    cout<<endl;  
    }
} */

/* int main(){
    int n;                           //if n=4
    cin>>n;                          // 1
    for(int i=0;i<n;i++){            // 1 2
      for(int j=0;j<=i;j++){         // 1 2 3
        cout<<j+1;                   // 1 2 3 4
    }
    cout<<endl;  
    }
} */

/* int main(){
    int n;                           //if n=4
    cin>>n;                          // 1
    for(int i=0;i<n;i++){            // 2 2
      for(int j=0;j<=i;j++){         // 3 3 3
        cout<<i+1<<" ";              // 4 4 4 4
    }
    cout<<endl;  
    }
} */

/* int main(){
    int n;                           
    cin>>n;                          //if n=4
    int count=1;                     // 1
    for(int i=0;i<n;i++){            // 2 3
      for(int j=0;j<=i;j++){         // 4 5 6
        cout<<count<<" ";            // 7 8 9 10
        count++;             
    }
    cout<<endl;  
    }
} */

/* int main(){
    int n;                           
    cin>>n;                          //if n=4
    int count=1,indicator=1;         // 1
    for(int i=1;i<=n;i++){           // 2 3
      for(int j=1;j<=i;j++){         // 3 4 5 
        cout<<count<<" ";            // 4 5 6 7 
        count++;             
    }
    indicator++;
    count=indicator;
    cout<<endl;  
    }
} */

/* int main(){
    int n;                          
    cin>>n;                          //if n=4
    int count=1,indicator=1;         // 1
    for(int i=1;i<=n;i++){           // 2 1
      for(int j=1;j<=i;j++){         // 3 2 1 
        cout<<count<<" ";            // 4 3 2 1 
        count--;             
    }
    indicator++;
    count=indicator;
    cout<<endl;  
    }
} */

/* int main(){
    int n; char ch='a';              //make it
    cin>>n;                          //if n=3
    for(int i=1;i<=n;i++){           // a b c
      for(int j=1;j<=n;j++){         // d e f 
        cout<<ch<<" ";               // g h i
        ch++;             
    }
    cout<<endl;  
    }
} */

/* int main(){
    int n; char ch='a';              //make it
    cin>>n;                          //if n=3
    for(int i=1;i<=n;i++){           // a a a
      for(int j=1;j<=n;j++){         // b b b 
        cout<<ch<<" ";               // c c c            
    }
     ch++; 
    cout<<endl;  
    }
} */

/* int main(){
    int n; char ch='a';              //make it
    cin>>n;                          //if n=3
    for(int i=1;i<=n;i++){           // a b c
      for(int j=1;j<=n;j++){         // a b c 
        cout<<ch<<" ";               // a b c            
        ch++;
    }
  ch='a';
    cout<<endl;  
    }
} */

/* int main(){
    int n;                           //make it
    cin>>n;                          //if n=5 =>
    for(int i=1;i<=n;i++){           //    *
for(int j=1;j<n;j++){                //   *
    if(j!=n-i){                      //  *
        cout<<" ";                   // *
    }
    else{
        cout<<"* ";
    }
}
    cout<<endl;  
    }
} */

/* int main()
{
    // Number of rows
    int N;
    cin >> N; 
    // Outer loop runs N times, once for each row
    for (int i = 1; i <= N; i++) {                         //N=no. of rows(if N=5)
          // Inner loop prints 'N - i' spaces            //     *
        for (int j = 1; j <= N - i; j++) {              //    * * *
            cout << "  ";                              //   * * * * *
        }                                             //  * * * * * * *
        // Inner loop prints '2 * i - 1' stars       // * * * * * * * * *
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        // Move to the next line
        cout << "\n";
    }
    return 0;
}  */


/* int main() {
    int n;
    cin>>n;
  for(int i=0;i<n;i++){
    //space 
    for(int j=0;j<i;j++){
        cout<<" ";                          //downward triangle
    }                                       //if n=5
    //star                                  //*********
    for(int j=0;j<2*n-(2*i+1);j++){        //  *******
        cout<<"*";                        //    *****
    }                                     //     ***
    //space                               //      *
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
} */


/* int main() {
    int n;
    cin>>n;
        for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i; j++) {              //diamond shape
            cout << "  ";  
        }  
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
        for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<i;j++){
        cout<<"  ";
    }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"* ";
    }
        //space
        for(int j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
} */


/* int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
// * 
    
} */


/* int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

//   1        1
//   12      21
//   123    321
//   1234  4321
//   1234554321

} */

/* int main(){
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
    for(char j='A';j<'A'+i;j++){
        cout<<j<<"  ";
    }
        cout<<endl;
    }
    return 0;

// A  
// A  B  
// A  B  C  
// A  B  C  D  
// A  B  C  D  E  

} */

/* int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //space
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //charcters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        
        //spaces
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;

//     A   
//    ABA  
//   ABCBA 
//  ABCDCBA
// ABCDEDCBA
} */

//thanks for watching

