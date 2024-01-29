#include <iostream>
using namespace std;
void summ(int sum , int end){
    if(end == 0)
    {
        cout<<sum<<endl; 
        return;
    }
    summ(sum+end , end-1);
}
int main(){
    int end,sum;
cout<<"Enter a number";
cin>>end; 
summ(0,end);   
}