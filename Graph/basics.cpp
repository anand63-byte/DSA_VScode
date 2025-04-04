#include<bits/stdc++.h>
using namespace std;

void addedg(int src,int dest,vector<list<int>>& graph ,bool flag = true){
    graph[src].push_back(dest);
    if(flag){
        graph[dest].push_back(src);
    }
}

void display(vector<list<int>>& graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto x : graph[i]){
            cout<<x<<", ";
        }
        cout<<endl;
    }
}

int main(){

    int v;
    cin>>v;
    vector<list<int>> graph(v , list<int> ());

    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        addedg(src,dest , graph);
    }
    display(graph);
}