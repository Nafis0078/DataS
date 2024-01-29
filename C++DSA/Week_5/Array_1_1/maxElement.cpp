#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of element";
    cin>>size;

    int arr[size];
    cout<<"Enter elements in the array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int maxEle = 0;
    for (int i = 0; i < size; i++)
    {
        if (maxEle<arr[i])
        {
            maxEle =arr[i]; 
        }
        
    }
        cout<<"Maximum Element"<<maxEle;
    
    

return 0;
}