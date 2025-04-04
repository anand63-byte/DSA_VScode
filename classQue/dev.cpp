#include<bits/stdc++.h>
using namespace std;

void f(vector<vector<int>>& arr, int& n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] != -1) q.push({i, j});
        }
    }
    while(!q.empty()){
        auto el = q.top();
        q.pop();
        int x = el.first;
        int y = el.second;
        if(x-1 >= 0 && arr[x-1][y] == -1){
            arr[x-1][y] = (arr[x][y] * arr[x][y]);
            q.push({x-1, y});
        } 
        if(y-1 >= 0 && arr[x][y-1] == -1){
            arr[x][y-1] = (2 * arr[x][y]);
            q.push({x, y-1});
        }
        if(y+1 < n && arr[x][y+1] == -1){
            arr[x][y+1] = (arr[x][y] / 2);
            q.push({x, y+1});
        } 
    }
    for(auto row : arr){
        for(auto it : row){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 3;
    vector<vector<int>> arr = {{-1, -1, -1}, {-1, -1, -1}, {-1, 4, -1}};
    f(arr, n);
}
