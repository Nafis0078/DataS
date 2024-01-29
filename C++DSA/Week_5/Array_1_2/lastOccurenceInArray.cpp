#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int size;
    cout<<"Enter size of the Array: ";
    cin>>size;
    cout<<"Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    

    cout<<"Enter the element to search";
    int Sele;
    cin>>Sele;

    for (int i = 0; i < size; i++)
    {
        if (Sele == v[i])
        {
            cout<<"First index: "<<i;
            break;
        }
           
    }
    cout<<endl;
int lastIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == Sele)
        {
            lastIndex = i;

        }
        
    }
        cout<<"Last Index: "<<lastIndex;
    
    
    
return 0;
}




















