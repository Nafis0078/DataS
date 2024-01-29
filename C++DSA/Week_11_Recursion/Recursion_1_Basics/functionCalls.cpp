#include <iostream>
using namespace std;
void goodMorning(int n){
    if (n==0) return ;
    cout<<"Good Morning"<<endl;
    goodMorning(n-1);
}
int main(){
    cout<<"Enter: ";
    int n;
    cin>>n;
    goodMorning(n);
    
return 0;
}