#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map <string , int> mp;
    pair <string , int> p1;
    p1.first = "A";
    p1.second = 1;

    pair<string , int> p2;
    p2.first = "B";
    p2.second = 2;

    pair<string,int> p3;
    p3.first = "C";
    p3.second = 3;


    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);


    // for (pair <string,int> p : mp){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    for (auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }


cout<<endl;








    // Better Method to insert and make pair...

    mp["D"] = 4;
    mp["E"] = 5;

     for (auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

cout<<endl;















    mp.erase("A");

 for (auto p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}