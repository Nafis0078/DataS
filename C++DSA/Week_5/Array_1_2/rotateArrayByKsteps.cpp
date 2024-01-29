#include <iostream>
#include <vector>
using namespace std;

int display(vector <int> &a){
    for (int i = 0; i < a.size(); i++)
    {
       
    cout<<a[i]<<" ";
    }
    
}

int rot(vector <int> &a){
    int temp = a[a.size()-1];
    a[a.size()-1] = a[0];
    a[0] = temp;
}
int main(){
    int size;
    vector <int> v;
    cout<<"Enter size of the array";
    cin>>size;
    cout<<"Enter elements in the array";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    cout<<"Enter steps to rotate";
    int steps;
    cin>>steps;

    display(v);
    cout<<endl;
    rot(v);
    cout<<endl;
    display(v);
}



