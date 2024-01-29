#include <iostream>
using namespace std;
void func(int start , int end){
    cout<<start<<endl;
    if (start == end) return;
    func(start+1 , end);
}
int main(){
int start,end;
cout<<"Enter starting number";
cin>>start;
cout<<"Enter ending number";
cin>>end;
func(start,end);    
return 0;
}