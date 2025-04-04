#include<bits/stdc++.h>
using namespace std;
vector< list<int> > graph;
unordered_set<int>st;
vector<vector<int>> res;
queue<int>qu;

void addEdge(int src , int dst){
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}

void display(){
    for(int i=0;i<graph.size();i++){
    cout<<i<<" -> ";
    for(auto x : graph[i]) cout<<x;
    cout<<endl;
  }
}

void bfs(int root){

    qu.push(root);
    st.insert(root);

    while(!qu.empty()){

        for(int i=0;i<graph[qu.front()].size();i++){

          int node = graph[qu.front()][i];

          if(st.find(node) == st.end()){

              st.insert(node);
              qu.push(node);
              cout<<node<<" ";

          }

        }

      qu.pop();

  }

}



void dfsAllPath(int src , int end , vector<int>& temp){
    
    if(src == end){
        temp.push_back(src);
        res.push_back(temp);
        temp.pop_back();
        return ;
    }

    st.insert(src);
    temp.push_back(src);

    for(auto x : graph[src]){
        if(st.find(x) == st.end()){
            dfsAllPath(x , end , temp);
        }
    }
    temp.pop_back();
    st.erase(src);

}

int main(){

  int v , e;
  cin>>v>>e;
  graph.resize(v , list<int>());

  while(e--){
    int a , b;
    cin>>a>>b;
    addEdge(a,b);
  }
  
  // int src , end;
  // cin>>src>>end;
  // vector<int>temp;

  int root = 0;

  //display();
  //dfsAllPath(src,end ,temp);
  bfs(root);

  // for(int i=0;i<res.size();i++){
  //    for(auto x : res[i]) cout<<x<<" ";
  //    cout<<endl;
  // }

}