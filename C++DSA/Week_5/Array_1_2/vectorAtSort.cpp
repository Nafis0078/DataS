// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
// //     // vector <int> v;
// //     // v.push_back(10);
// //     // cout<<v[0];
// //     // cout<<endl;
// //     // cout<<v.at(0);



//     vector<int> v;
//     cout<<"Enter elements";

//     for (int i = 0; i < 5; i++)
//     {
//         cin>>i;
//         v.push_back(i);
//     }

// return 0;
// }






//  Sorting Vector


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int size;
    vector <int> v;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter elements: ";

    for (int i = 0; i < size; i++)
    {
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    cout<<"Elements: "; 
    sort(v.begin() , v.end());
    for (int i = 0; i < size; i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    
return 0;
}
