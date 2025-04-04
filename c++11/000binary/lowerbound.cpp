#include<iostream>
#include<vector>
using namespace std;
bool check(int speed,vector<int>& piles,int h){
        int count=0;
        int n=piles.size();
        int i=0;
        while(i<n){
            if(speed>=piles[i]){
                i++;
                count++;
            }
            else{
                piles[i]-=speed;
                count++;
            }
        }
        if(count>h) return false;
        else return true;
    }
int main(){
    int arr[]={3,5,7,8,19,23,25,27};
    for(int i=0;i<8;i++){ 
        if(arr[i]>24)  {cout<<arr[i-1];
        break;
    }
    }
    int speed=3;
    vector<int> piles={3,6,7,11};
    int h=8;
    cout<<check(speed,piles,h);
}