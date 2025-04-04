#include<iostream> 
using namespace std;
    void recSum(int n , int& sum){
        if(n==0) {
            cout<<sum<<" ";
            return ;
        }
        sum += n;
        recSum(n-1,sum);
    }

    int recsum(int n , int sum){
        if(n==0) return sum;
        sum += n;
        return recsum(n-1,sum);
    }

    void display(int n){
        if(n==0) return;
        cout<<n<<" ";
        display(n-1) ;
    }

    int sum(int n){  //ye badhiya tha guru : ;
        if(n==0) return 0;
        return n + sum(n-1);   // take n and call other to calulate rest
    }
int main(){
    int n = 5;
    int sum = 0;
    recSum(n,sum);
    cout<<endl;
    cout<<recsum(n,0);
    cout<<endl;
    display(n);
    cout<<endl;
    cout<<sum;
}