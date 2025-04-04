 #include<iostream>
 using namespace std;
 int main(){
int nums[]={3,4,5,6,1,2};
int target=4;
int n=6;
    int lo=0;
    int hi=n-1;
    if(n==2){
        if(nums[0]==target) return 0;
        else if(nums[1]==target) return 1;
        else return -1;
    }
    //finding pivot
    int pivot=-1;
    while(lo<=hi){
        int mid=lo+ (hi-lo)/2;
        if(mid==0)lo=mid+1;
        else if(mid==n-1) hi=mid-1;
        else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            pivot=mid+1;
            break;
        }
        else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
             pivot=mid;
              break;
              }
        else if(nums[mid]>nums[hi]) lo=mid+1;
        else if(nums[mid]<nums[hi]) hi=mid-1;
    }
    cout<<pivot;
    if(pivot==-1){
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+ (hi-lo)/2;
            if(nums[mid]==target) cout<<"a";//return mid;
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
       // return -1;
    }
    if(target>=nums[0] && target<=nums[pivot-1]){
        lo=0;
        hi=pivot-1;
        while(lo<=hi){
            int mid=lo+ (hi-lo)/2;
            if(nums[mid]==target){
                //return mid;
                break;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }
    }
    else{
        lo=pivot;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+ (hi-lo)/2;
            if(nums[mid]==target){
                //return mid;
                break;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        } 
        }
        //return -1;
    
    }