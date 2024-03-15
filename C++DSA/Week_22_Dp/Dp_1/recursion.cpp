// #include <iostream>
// using namespace std;
// int rec(int n){

//     if (n==0 or n==1) return n;
//     return (n-1) + (n+1);
    


// }
// int main(){
//     cout<<rec(5);
    
// return 0;
// }






// Using Dynamic Programming..


// #include <iostream>
// #include<vector>
// using namespace std;
// vector<int> dp;
// int rec(int n){
//     if (n==0 or n==1) return n;

//     // dp check,to identify if problem was already solved earlier.

//     if(dp[n] != -1)  return dp[n]; // dp[n]==-1  -> means that ith subprblm is not yet computed.
//     return dp[n] =  rec(n-1) + rec(n-2);  // Stroing answers.
    
// }
// int main(){

//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     dp.clear();
//     dp.resize(n+1 , -1);  
//     cout<<rec(n);

    
// return 0;
// }














// Using bottom up approach.



// #include <iostream>
// #include <vector>
// using namespace std;

// vector <int> dp;
// int rec(int n){
//     dp.clear();
//     dp.resize(n+1 , -1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     return dp[n];
    
// }
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;

//     cout<<rec(n);
// return 0;
// }









// #include <iostream>
// using namespace std;
// int rec(int n){
//     int a=0;
//     int b=1;
//     if (n==0 or n==1) return n;
//     int c = 0;
//     int i = 2;
//     while(i<=n){
//     c=a+b;
//     a=b;
//     b=c;
//     i++;

//     }
//     return c;
    
    
// }
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     cout<<rec(n);
// return 0;
// }









// Using dynamic programming #Revision





#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
    vector <int> dp;

 int fib(int n){

        if (n==0 || n==1) return n;
        if (dp[n]!=-1) return dp[n];


        else return dp[n] = fib(n-1) + fib(n-2);
    }

int main(){

    int n = 5;
    dp.clear();
    dp.resize(n+1 , -1);
    cout<<fib(n);
return 0;
}