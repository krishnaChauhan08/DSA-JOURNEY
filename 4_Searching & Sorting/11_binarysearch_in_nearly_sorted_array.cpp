#include<iostream>
#include<vector>
using namespace std;
int searchnearlysorted(vector<int>&arr,int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid-1>=0&&arr[mid-1]==target){
            return mid-1;
        }
        else if(mid+1<n&&arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(s-e)/2;
    }
    return -1;
}
int main()
{   vector<int>arr={20,10,30,50,40,70,60};
    int n=arr.size();
    int target=40;
    int targetindex=searchnearlysorted(arr,n,target);
    if(targetindex==-1){
        cout<<"not found"<<endl;
    }
    cout<<"target index is:"<<targetindex<<endl;
    return 0;
}