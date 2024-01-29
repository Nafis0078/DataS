// #include <iostream>
// using namespace std;
// int main(){
//     int x = 450;
//     cout<<&x;
// return 0;
// }



#include <iostream>
using namespace std;
int main(){
    int x = 2;
    int* p = &x;
    
    cout<<&x<<endl;
    cout<<p;
return 0;
}