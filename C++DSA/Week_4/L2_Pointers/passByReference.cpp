// Swapping using a temporary variable.


// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 6;
//     int temp = a ; 
//     a = b;
//     b = temp;
//     cout<<a<<b;
// return 0;
// }




// Swapping by reference.
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int b = 6;
//     int *p1 = &a;
//     int *p2 = &b;
//     int temp = *p1;
//     *p1 = *p2;
//     *p2  = temp;

//     cout<<*p1;
//     cout<<*p2;

// return 0;
// }



// Same using functions.

#include <iostream>
using namespace std;
int swap(int *p1,int *p2){
    // int sum = *p1 + *p2;
    // cout<<sum;

    int temp = *p1;
    *p1 = *p2;
    *p2=temp;
    cout<<*p1;
    cout<<endl;
    cout<<*p2;
    

}
int main(){
    int x = 5;
    int y = 7;
    int *p1 = &x; 
    int *p2 = &y; 
    swap(&x,&y);

return 0;
}





