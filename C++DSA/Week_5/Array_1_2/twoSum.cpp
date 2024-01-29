// #include <iostream>
// #include <vector>
// using namespace std;

//  int twoSum(vector<int>& nums, int target) {
//         for(int i = 0 ; i<nums.size() ; i++){
//             for(int j = 0 ; j<nums.size() ; j++){
//                 if((nums[i] + nums[j]) == target){
//                     cout<<i<<j;
//                     break;
//                 }
//             }
//         }
        
//     }
// int main(){
//     vector<int> nums;
//     int target;
//     nums.push_back(2);
//     nums.push_back(7);
//     nums.push_back(11);
//     nums.push_back(15);
//     cout<<"Enter target element";
//     cin>>target;
//     twoSum(nums , target);
//     return 0;
// }











// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v;
//     int target,size;
//     cout<<"Enter size of array";
//     cin>>size;
//     int arr[size];
//     cout<<"Enter elements";
//     for (int i = 0; i < size; i++)
//     {
//         int ele;
//         cin>>arr[ele];
//         v.push_back(ele);
//     }

//     cout<<"Enter target element";
//     cin>>target;

//     for (int i = 0; i <= v.size()-2; i++)
//     {
//         for (int j = i+1; j <=v. size()-1; j++)
//         {
//             if ((v[i]+v[j]) == target)
//             {
//                 cout<<i<<" "<<j;
//                 cout<<endl;
//                 break;
//                 return 0;
//             }
            
//         }
        
//     }
    
    
// return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int target, size;
    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << "Enter target element: ";
    cin >> target;

    for (int i = 0; i <= v.size() - 2; i++) {
        for (int j = i + 1; j <= v.size() - 1; j++) {
            if ((v[i] + v[j]) == target) {
                cout << "Indices of elements that sum to the target: " << i << " " << j << endl;
                return 0;  // Exit the program after finding the first pair
            }
        }
    }

    cout << "No pair of elements sums to the target." << endl;

    return 0;
}
