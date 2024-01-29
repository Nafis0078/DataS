#include <iostream>
using namespace std;
int pow2(int b,int p){
    if (p==0) return 1;
   if ((p%2==0))
   {
    return ((pow2(b,p/2))*(pow2(b,p/2)));
    
   }
   else  
   {
    return ((pow2(b,p/2) )*b*(pow2(b,p/2) ));
   }
   
   
}
int main(){
    int b , p;
    cout<<"Enter base";
    cin>>b;
    cout<<"Enter power";
    cin>>p;
    cout<< pow2(b,p);
return 0;
}