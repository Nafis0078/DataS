#include <iostream>
using namespace std;
   int maze(int sr ,int sc ,int er , int ec){
    
        if ((sr == er )&& (sc == ec )) return 1;
        if ((sr > er ) || (sc > ec)) return 0;
        int rightways =  maze(sr , sc+1 , er,ec);
        int downways = maze(sr+1 ,sc , er ,ec );
        
        int totalways = rightways+downways;
        return totalways;
   }
int main(){
    int rows,columns;
    cout<<"Enter number of rows";
    cin>>rows;
    cout<<"Enter number of columns";
    cin>>columns;
    cout<<maze(0,0,rows, columns);
return 0;
}