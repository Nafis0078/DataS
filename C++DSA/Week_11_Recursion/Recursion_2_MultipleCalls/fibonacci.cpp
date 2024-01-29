#include <iostream>
using namespace std;
int fibb(int n){
    if (n == 1 || n == 2) return 1;
    else return fibb(n-2) + fibb(n-1);
}
int main(){
    cout<<"Enter a number to find fibonacci utpo:";
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cout << fibb(i) << " ";
    }
return 0;
}