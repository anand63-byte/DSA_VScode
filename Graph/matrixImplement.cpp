#include<bits/stdc++.h>
using namespace std;

void addedg(int src,int dest,vector<vector<int>>& graph ,bool flag = true){
    graph[src][dest] = 1;
    if(flag){
        graph[dest][src] = 1;
    }
}

void display(vector<vector<int>>& graph){
    for(int i=0;i<graph.size();i++){
        for(auto x : graph[i]){
            cout<<i<<x<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int v;
    cin>>v;
    vector< vector<int> > graph( v, vector<int> (v , 0));

    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        addedg(src,dest , graph);
    }
    display(graph);
}