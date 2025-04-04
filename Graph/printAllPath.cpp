#include<bits/stdc++.h>
using namespace std;

unordered_set<int>st;

void addedg(int src,int dest,vector<list<int>>& graph ,bool flag = true){
    graph[src].push_back(dest);
    if(flag){
        graph[dest].push_back(src);
    }
}

void printallpaths(int a,int b,vector<list<int>>& graph,vector<vector<int>>& res,vector<int>&temp){
    if(a == b){
        temp.push_back(a);
        res.push_back(temp);
        temp.pop_back();
        return ;
    }
    temp.push_back(a);
    st.insert(a);
    for(auto x : graph[a]){
        if(st.find(x) == st.end()){
            printallpaths(x,b,graph,res,temp);
        }
    }
    st.erase(a);
    temp.pop_back();
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

    int a, b;
    cin>>a>>b;
    vector<vector<int>> res;
    vector<int>temp;
    printallpaths(a , b , graph, res, temp);

    for(auto x : res){
        for(auto y : x) cout<<y<<" ";
        cout<<endl;
    }
}