// Time Stamp =  2:11:00  MAst chiz



// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int size;
//     vector <int> v;
//     cout<<"Enter size of the array";
//     cin>>size;
//     cout<<"Enter elements in the array";
//     for (int i = 0; i < size; i++)
//     {
//         int elements;
//         cin>>elements;
//         v.push_back(elements);
//     }


//     for (int i = 0; i < size; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
    
//     vector <int> v2;

//     for (int i = size-1; i >= 0; i--)
//     {
//         v2.push_back(v[i]);
//     }
//     cout<<endl;
    

//     for (int i = 0; i < size; i++)
//     {
//         cout<<v2[i]<<" ";
//     }


    
// return 0;
// }



// Without using another array. 


#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &a){
         for (int  i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;

}
int main(){
    vector<int>v;
    int size;
    cout<<"Etner size of the array";
    cin>>size;
    cout<<"Enter array elements";
    for (int i = 0; i < size; i++)
    {
        int elements;
        cin>>elements;
        v.push_back(elements);

    }





    // REVERSE
    // int i = 0;
    // int j = v.size()-1;
    // while (i<=j)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    // display();
    

    // using for

    for (int i = 0 ,  j = v.size()-1; i <= j ; i++ , j--)
    {
          int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        
    }
    display(v);
    
    
    
return 0;
}