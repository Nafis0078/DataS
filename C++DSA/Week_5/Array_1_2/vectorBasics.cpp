#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}
int main(){
    vector <int> v;
    v.push_back(56);
    v.push_back(61);
    v.push_back(65);
    v.push_back(60);

    
    display(v);
    cout<<endl;
    v.push_back(100);
    display(v); 
    cout<<endl;


    v.pop_back();
    display(v);
    
return 0;
}   