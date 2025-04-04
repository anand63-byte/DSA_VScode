#include<iostream>
using namespace std;
int main(){
//     string s;
// getline(cin,s);
// int i=0,count=0;
// while(s[i]!='\0'){
//     if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//     count++;

// }

// //update with a at even position
// if((i+1)%2==0){
//     if(s[i]=='\0') cout<<" ";
//     else s[i]='a';
// }

// i++;
// }
// cout<<count<<endl<<s;

  string sg="12552031545";
//   int ans=stoi(sg);
  int sum=0;
  int k=2;
        for(int i=0;i<k;i++){
          while(stoi(sg)!=0){
            int ld=stoi(sg)%10;
            sum+=ld;
            stoi(sg)/10;
          }
          sg=to_string(sum);
        }
        cout<<sum;
}