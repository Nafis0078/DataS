#include <iostream>
#include <vector>
using namespace std;




void change(vector<int> a){
    a[0] = 5;
    cout<<endl;

}




void display(vector<int> a){
        for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}





int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(100);
    v.push_back(1000);
    v.push_back(10000);



    display(v);
    change(v);  // In this case ,  no changes occurs. But if we use ampersand(&) in  function with the vector,changes occurs as using ampersand a new vector named a points to the same vector.
    display(v);
    
return 0;
}