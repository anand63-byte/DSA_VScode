#include <bits/stdc++.h>
using namespace std;

vector<list<int>> graph;

void addEdge(int src, int dst) {
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}

void dfs(int src, unordered_set<int>& st) {
    st.insert(src);

    for (auto x : graph[src]) {
        if (st.find(x) == st.end()) {
            dfs(x, st);
        }
    }
}

int cc() {
    int count = 0;
    unordered_set<int> st;

    for (int i = 0; i < graph.size(); i++) {
        if (st.find(i) == st.end()) { 
            dfs(i, st);
            count++;  
        }
    }

    return count;
}

int main() {
    int v, e;
    cin >> v >> e;
    graph.resize(v, list<int>());

    while (e--) {
        int a, b;
        cin >> a >> b;
        addEdge(a, b);
    }

    cout << cc() << endl;

    return 0;
}
