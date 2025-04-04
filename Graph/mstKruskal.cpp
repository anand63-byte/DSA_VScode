#include<bits/stdc++.h>
using namespace std;
int find(int i, vector<int>&parent){   
    if(parent[i] == i) return i;
    return parent[i] = find(parent[i] , parent);
}
void Union(int x , int y , vector<int>& parent,vector<int>& rank){
    int x_parent = find(x,parent);
    int y_parent = find(y,parent);
    
    if(x_parent != y_parent){
        if(rank[x_parent] > rank[y_parent]){
            parent[y_parent] = x_parent;
        }
        else if(rank[x_parent] < rank[y_parent]){
            parent[x_parent] = y_parent;
        }
        else{
            parent[y_parent] = x_parent;
            rank[x_parent] ++;
        }
    }
}
struct Edge{
    int src;
    int dest;
    int weight;
};
bool cmp(Edge a , Edge b){
    return a.weight < b.weight;
}
int kruskals(int v, vector<Edge>& edges){
    vector<int> parent(v);
    vector<int> rank(v,0);
    for(int i = 0; i < v; i++){
        parent[i] = i;
    }
    sort(edges.begin(), edges.end(), cmp);
    int ans = 0;
    for(auto edge : edges){
        int x = edge.src;
        int y = edge.dest;
        if(find(x,parent) != find(y,parent)){
            ans += edge.weight;
            Union(x,y,parent,rank);
        }
    }
    return ans;
}
int main(){
   vector<Edge> edges;
   int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;
    cout << "Enter the edges (src dest weight):" << endl;
    for (int i = 0; i < e; i++) {
        Edge edge;
        cin >> edge.src >> edge.dest >> edge.weight;
        edges.push_back(edge);
    }
    int ans = kruskals(v, edges);
    cout << "Minimum Spanning Tree weight: " << ans << endl;
}