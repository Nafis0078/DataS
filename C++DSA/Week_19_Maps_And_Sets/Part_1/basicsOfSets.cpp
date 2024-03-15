#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set <int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    // Display elements:

    for(int element : s){
        cout<<element<<" ";
    }

    cout<<endl; 





    // To delete an element

    s.erase(20);
    // display
    for(int element : s){
        cout<<element<<" ";
    }




    //Check element is present or not..

    int target = 20;
    if(s.find(target) != s.end()) cout<<"Yes";
    else cout<<"No";
return 0;
}