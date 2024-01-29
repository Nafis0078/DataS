// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"* ";
//     }
    
// return 0;
// }



// Same thing using functions :


// #include <iostream>
// using namespace std;

// int patt(int n){
//     for (int  i = 0; i < n; i++)
//     {
//         cout<<"* ";
//     }
    
// }
// int main(){
//     patt(5);
    
// return 0;
// }























// Pattern printing using taking input:

// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter number of rows";
//     cin>>rows;
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    


// return 0;
// }


// Pattern printing using taking input using functions:

// #include <iostream>
// using namespace std;
// int patt(int rows){
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
//     }
    
// }
// int main(){
//     int rows;
//     cout<<"Enter rows";
//     cin>>rows;
//     patt(rows);
    
// return 0;
// }




// #include <iostream>
// using namespace std;

// int f(int rows){
    
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
//     }
// }
    
// int main(){
//     int rows;
//     cout<<"Enter rows";
//     cin>>rows;

//     f(rows);
    
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//     for (int  i = 0; i < 5 ; i++)
//     {
//         for (int j = 0; j <i ; j++)
//         {
//             cout<<"l ";
//             for (int k = 0; k < 4; k++)
//             {
//                 cout<<"f ";
//             }
            
            

//         }
//         cout<<endl;
        
//     }
    
// return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){

//     for (int  i = 5; i > 0 ; i--)
//     {
//         for (int j = 0; j <i ; j++)
//         {
//             cout<<"l ";
            
            
//         }
//         cout<<endl;
        
//     }
    
// return 0;
// }











#include <iostream>
using namespace std;
int main(){
    int i , j , k;
    for ( i = 0; i <= 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        for ( k = 5; k > j; k--)
        {
            cout<<"7 ";
        }
        
        
        
    }
    
return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int i, j, k;
//     for (i = 0; i <= 5; i++) {
//         for (j = 0; j < i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//         for (k = 5; k > j; k--) {  // Corrected the loop condition here
//             cout << "| ";
//         }
//         // cout << endl;
//     }

//     return 0;
// }
