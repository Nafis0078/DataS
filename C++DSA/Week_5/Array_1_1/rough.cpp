// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int x;
// //     bool flag  =false;
// //     cout<<"Enter a number";
// //     cin>>x;

// //     if (x==1 ) cout<<"Not a prime";
// //     else{
// //         for (int i = 2; i < x; i++)
// //         {
// //             if (x%i != 0)
// //             {
// //                 flag = true;
// //             }
// //             else{
// //                 break;
// //             }
            
// //         }
// //         if (flag == true) cout<<"Prime";
// //         else cout<<"No Prime";

        
        
// //     }

    
    
// // return 0;
// // }




















// #include <iostream>
// using namespace std;
// bool isPrime(int num) {
//     if (num < 2)
//         return false;

//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0)
//             return false;
//     }

//     return true;
// } 
// int main(){
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     int count = 0;
//     int num = 2;
//     while (count<n)
//     {
//         if(isPrime(num)){
//             cout<<num<<" ";
//             count++;
//         }
//          num++;
//     }
    

// return 0;
// }




#include <iostream>

int main() {
    int myArray[] = {12, 5, 8, 15, 3, 20, 10};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Find the maximum element
    int maxElement = myArray[0];
    int maxElementIndex = 0;
    for (int i = 1; i < arraySize; ++i) {
        if (myArray[i] > maxElement) {
            maxElement = myArray[i];
            maxElementIndex = i;
        }
    }

    // Set the maximum element to zero
    myArray[maxElementIndex] = 0;

    // Display the updated array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
