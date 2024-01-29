#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 15;
    int *p = &x;
    int *q = &y;

    cout<<*p+*q;
return 0;
}