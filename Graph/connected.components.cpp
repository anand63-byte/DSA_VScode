#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void addedge(int src, int dest, vector<list<int>>& graph) {
        graph[src].push_back(dest);
        graph[dest].push_back(src); // Assuming the graph is undirected
    }

    void dfs(vector<list<int>>& graph, int src, vector<int>& temp, unordered_set<int>& st) {
        st.insert(src);
        temp.push_back(src);
        for (auto x : graph[src]) {
            if (st.find(x) == st.end()) dfs(graph, x, temp, st);
        }
    }

    vector<vector<int>> connectedcomponents(int v, vector<vector<int>>& edges) {
        vector<list<int>> graph(v, list<int>());
        for (int i = 0; i < edges.size(); i++) {
            addedge(edges[i][0], edges[i][1], graph);
        }

        vector<vector<int>> res;
        unordered_set<int> st;
        for (int i = 0; i < v; i++) {
            vector<int> temp;
            if (st.find(i) == st.end()) {
                dfs(graph, i, temp, st);
                res.push_back(temp);
            }
        }

        return res;
    }
};

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<vector<int>> edges(e, vector<int>(2));
    cout << "Enter the edges (src dest):" << endl;
    for (int i = 0; i < e; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    Solution sol;
    vector<vector<int>> components = sol.connectedcomponents(v, edges);

    cout << "Connected Components:" << endl;
    for (auto& component : components) {
        for (int node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}