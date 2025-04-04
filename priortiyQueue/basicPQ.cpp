#include<bits/stdc++.h>
using namespace std;
class Maxheap{
    vector<int> hp;
    public:

    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1)/2;

            if(hp[pi] < hp[ci]){
                swap(hp[pi] , hp[ci]);
                ci = pi;
            } else {
                break;
            }
        }
    }

    void push(int x){
        hp.push_back(x);
        upheapify(hp.size() - 1);
    }

    void downheapify(int idx){
        while(idx < hp.size()){
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 1;

            if(lc >= hp.size()) break;

            int maxEl = idx;

            if(hp[lc] > hp[maxEl])  maxEl = lc;
            if(rc < hp.size() && hp[rc] > hp[lc]) maxEl = rc;

            if(idx != maxEl){
            swap(hp[idx],hp[maxEl]);
            idx = maxEl;
            } else{
            break;
            }
        }
    }

    void pop(){
        if(empty()) return ;
        swap(hp[0] , hp[hp.size() - 1]);
        hp.pop_back();
        if(!empty()) downheapify(0);
    }

    int peak(){
        if(empty()) return INT_MIN;
        return hp[0];
    }

    bool empty(){
        return hp.size() == 0;
    }

    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Maxheap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    cout<<endl;

    //cout<<hp.peak();

    hp.pop();
    hp.display();


}