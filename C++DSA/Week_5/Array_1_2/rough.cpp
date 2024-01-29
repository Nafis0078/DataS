// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     // vector <int> v;
//     // v.push_back(1);
//     // v.push_back(5);
//     // v.push_back(8);

//     // cout<<


//     int a[5] = {1,2,3,4,5};
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i];
//     }
    
// return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements in array form: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
