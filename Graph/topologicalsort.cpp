// #include<bits/stdc++.h>
// using namespace std;

// void addedg(int src,int dest,vector<list<int>>& graph ,bool flag = true){
//     graph[src].push_back(dest);
//     if(flag){
//         graph[dest].push_back(src);
//     }
// }

// void toposort(vector<list<int>>& graph,int v){
//      vector<int>indegree(v,0);
//      for(int i=0;i<v;i++){
//         for(auto x : graph[i]){
//             indegree[x]++;
//         }
//      }
//      queue<int>qu;
//      unordered_set<int>st;
//      for(int i=0;i<v;i++){
//         if(indegree[i] == 0){
//             qu.push(i);
//             st.insert(i);
//         }
//      }

//      while(!qu.empty()){
//         int n = qu.front();
//         cout<<n<<" ";
//         qu.pop();
//         for(auto x : graph[n]){
//             if(st.find(x) == st.end()){
//                 indegree[x]--;
//                 if(indegree[x] == 0) {
//                     qu.push(x);
//                     st.insert(x);
//                 }
//             }
//         }
//      }
// }

// int main(){

//     int v;
//     cin>>v;
//     vector<list<int>> graph(v , list<int> ());

//     int e;
//     cin>>e;
//     while(e--){
//         int src,dest;
//         cin>>src>>dest;
//         addedg(src,dest , graph);
//     }

//     toposort(graph,graph.size());
// }

#include <bits/stdc++.h>
using namespace std;

void addedg(int src, int dest, vector<vector<int>>& graph, bool flag = false) {
    graph[src].push_back(dest);
    if (flag) {
        graph[dest].push_back(src); 
    }
}

void toposort(vector<vector<int>>& graph, int v) {
    vector<int> indegree(v, 0);

    // Compute in-degrees
    for (int i = 0; i < v; i++) {
        for (auto x : graph[i]) {
            indegree[x]++;
        }
    }

    queue<int> qu;

    // Push all nodes with in-degree 0
    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            qu.push(i);
        }
    }

    vector<int> topo; // Store topological order

    while (!qu.empty()) {
        int node = qu.front();
        qu.pop();
        topo.push_back(node);

        for (auto x : graph[node]) {
            indegree[x]--;
            if (indegree[x] == 0) {
                qu.push(x);
            }
        }
    }

    // Check for cycles (DAG validation)
    if (topo.size() != v) {
        cout << "Graph has a cycle. Topological sorting is not possible." << endl;
        return;
    }

    // Print Topological Sorting
    for (int node : topo) {
        cout << node << " ";
    }
    cout << endl;
}

int main() {
    int v, e;
    cin >> v >> e;
    
    vector<vector<int>> graph(v);

    while (e--) {
        int src, dest;
        cin >> src >> dest;
        addedg(src, dest, graph); // By default, the graph remains directed
    }

    toposort(graph, v);

    return 0;
}
