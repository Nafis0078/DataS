// Given an array of marks of students,if the marks of amy student is less than 35 print its roll number.


#include <iostream>
using namespace std;
int main(){
    int stu;
    cout<<"Enter number of students";
    cin>>stu;
    int stud[stu];
    cout<<"Enter number of students";
    cout<<endl;
    for (int i = 1; i <= stu; i++)
    {
        cin>>stud[i];
    }
    cout<<endl;

    for (int i = 1; i <= stu; i++)
    {
        if (stud[i] < 35)
        {
            cout<<i<<" ";
        }
        
        
    }
    
    
return 0;
}