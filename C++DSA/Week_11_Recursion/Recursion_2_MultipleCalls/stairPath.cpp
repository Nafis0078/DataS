//  For either 1 step or 2 step at a time.




#include <iostream>
using namespace std;
int stairPath(int a ){
    if (a==1 || a==0) return 1;
    if (a<0) return 0;
   return (stairPath(a-1) + stairPath (a-2) );
}
int main(){
    int a ;
    cout<<"Enter number of stairs";
    cin>>a;
    cout<<stairPath(a);
return 0;
}



// or either 1 , 2  or 3 step at a time.

// #include <iostream>
// using namespace std;
// int stairPath(int a ){
//     if (a==1 || a==0) return 1;
//     if (a<0) return 0;
//    return (stairPath(a-1) + stairPath (a-2) + stairPath (a-3));
// }
// int main(){
//     int a ;
//     cout<<"Enter number of stairs";
//     cin>>a;
//     cout<<stairPath(a);
// return 0;
// }
