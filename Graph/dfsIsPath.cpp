#include<bits/stdc++.h>
using namespace std;

unordered_set<int>st;

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

bool isPath(int a, int b , vector<list<int>>& graph){
    if(a == b) return true;
    st.insert(a);
    for(auto x : graph[a]){
        if(st.find(x) == st.end()){
            bool result = isPath(x,b , graph);
            if(result) return true;
        }
    }
    return false;
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
    //display(graph);

    int a, b;
    cin>>a>>b;
    cout<<isPath(a , b , graph);
}