#include <iostream>
#include <vector>
using namespace std;
 
int recmax(vector<int> &arr)
{
      int maxvalue = 0;
      int a = 0;
 
    for (int i = 0; i < arr.size(); i++){
        a = a + arr[i];
        a = max(a, 0);
        maxvalue = max(maxvalue, a);
    }
 
    return maxvalue;
}
 
int main()
{   
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
 
    // cout <<recmax(arr)<<endl;

     string a = "aaditya";
     cout<<a.substr(0,5);
 
    return 0;
}