#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    int n;
    cout<<"Enter a number to search in the array";
    cin>>n;
    bool found = false;
    for (int j = 0; j < size; j++)
    {
        if (n==v[j]) 
        {
            
found = true;
        }
    }
        
        
        if (found)
        {
            cout<<"Element Present";
        }
        else{
            cout<<"Not Found";
        }
        
    
    
    
return 0;
}