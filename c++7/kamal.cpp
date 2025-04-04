#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=1;
    int idx=0;
    while(n-sum>0){
        sum+=i;
        i++;
        idx++;
    }
    int ans=sum-n;
    int count=0;
    //cout<<"sum"<<sum<<endl;
    if(ans==0){
        for(int i=0;i<idx;i++){
        for(int j=0;j<=i;j++) cout<<"1"<<" ";
        cout<<endl;
        }
    }
    else{
        for(int i=0;i<idx-1;i++){
           for(int j=0;j<=i;j++) {
            cout<<"1"<<" ";
            count+=1;
           }
           cout<<endl;
        }
        //cout<<" idx "<<idx;
        int answer=count;
        for(int i=0;i<idx;i++){ 
        if(i!=0 && i!=idx-1){
            // int u=n-count;
            //    int j=idx-2;
            //   float t=(float)u/j;
            //   answer=answer+1;
            cout<<"1"<<" ";
        }
        else{
            answer=answer+(idx-2);
            //cout<<" count "<<answer;
            int r=n-answer;
            float f=(float)r/2;
            cout<<f<<" ";
            answer=answer-(idx-2);
        }
        }
    }
}