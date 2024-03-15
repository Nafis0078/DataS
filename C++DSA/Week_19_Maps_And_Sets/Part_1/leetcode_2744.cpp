#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string rev(string &x) {
    for (int i = 0; i < x.size() / 2; i++) {
        swap(x[i], x[x.size() - 1 - i]);
    }
    return x;
}

int main() {
    unordered_set<string> s;
    string ab[] = {"ab", "bc", "cd"};
    for (int i = 0; i < 3; i++) {
        string reverse = rev(ab[i]);
        s.insert(reverse);
        s.insert(ab[i]);

        


    }
     for(string element : s){
        cout << element << " ";
    }
    cout << endl;
    

    cout<<endl; 
    
    return 0;
}
