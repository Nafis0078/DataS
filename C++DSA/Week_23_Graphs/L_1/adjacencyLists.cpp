#include <iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>>graph;
int v; // Number of vertices.
void add_edge(int src, int dest, vector<list<int>>graph, bool bi_dir = true){
    graph[src].push_back(dest);
    if (bi_dir)
    {
       graph[dest].push_back(src);
    }
    
}

int main(){

    cin>>v;
    graph.resize(v,list<int>())
    add edge()
    
return 0;
}