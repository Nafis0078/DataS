// -----------------BETTER CODE AT BELOW------------


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int size;
//     cout<<"Enter size of element";
//     cin>>size;

//     int arr[size];
//     cout<<"Enter elements in the array";
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
        
        
//     }
//        int maxEle = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (maxEle<arr[i])
//         {
//             maxEle =arr[i]; 
//         }
        
//     }
//         cout<<"Maximum Element"<<maxEle;

//         int SecMax = arr[0];
//         for (int i = 0; i < size; i++)
//         {
//             if (SecMax<arr[i] and SecMax != maxEle)
//             {
//                 cout<<SecMax;

//             }
            
//         }
        
    
    
    

// return 0;
// }










// #include <iostream>
// using namespace std;
// int maxELE(int arr1[],int n){

//     int index;
//     int maxEle = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (maxEle<arr1[i])
//         {
//             maxEle = arr1[i];
//              index = i+1;
            
//         }
        
//     }
//     cout<<endl;
//             cout<<"max element is "<<maxEle <<endl;//"it's index "<<index<<" "<<endl;

//         arr1[index-1] =0 ;
//     }

// int display(int arr1[],int n){
//         for (int i = 0; i < n; i++)
//     {
//         cout<<arr1[i];
//     }
//     cout<<endl;
// }


// int main(){
//     int n;
//     cout<<"enter the size of the array";
//     cin>>n;
//     int arr1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"ENTER the "<<i+1<<"st element"; 
//         cin>>arr1[i];
        
//     }

//     maxELE(arr1 , n);
//     cout<<"Second Max: ";
//     maxELE(arr1 , n);





















// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array";
//     cin>>n;
//     int arr1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"ENTER the "<<i+1<<"st element"; 
//         cin>>arr1[i];
        
//     }


//     // Display

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout<<arr1[i];
//     // }
//     // cout<<endl;


//     //  Max and indx.
// int index;
//     int maxEle = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (maxEle<arr1[i])
//         {
//             maxEle = arr1[i];
//              index = i+1;
            
//         }
        
//     }
//     cout<<endl;
//             cout<<"max element is "<<maxEle <<endl<<"it's index "<<index<<" "<<endl;

//     arr1[index-1] =0 ;

//     //     for (int i = 0; i < n; i++)
//     // {
//     //     cout<<arr1[i]<<" ";
//     // }
//     cout<<endl;

//     int SmaxEle = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (SmaxEle<arr1[i])
//         {
//             SmaxEle = arr1[i];
//              index = i+1;
            
//         }
        
//     }
//     cout<<endl;
//             cout<<"Seccond max element is "<<SmaxEle <<endl;




// return 0;
// }










// Better Code:



#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array:";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // For maximum:

    int Max = INT_MIN;
    int SMAX = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (Max<arr[i]) Max = arr[i];
        
        
    }
    cout<<"Maximum Element: "<<Max<<endl;


    // For second Maximun:


        for (int i = 0; i < size; i++)
    {
        if (SMAX<arr[i] and arr[i]!=Max) SMAX = arr[i];
        
        
    }
    cout<<" Second Maximum Element: "<<SMAX;


    
return 0;
}