#include<iostream>
#include<vector>
using namespace std;
int sqrt(int x){
    int s=0;
    int e=x;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            // right mai jao
            ans=mid;
            s=mid+1;
        }
        else{
            // left mai jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{   int x;
    cout<<"value of x:"<<endl;
    cin>>x;
    int squareroot=sqrt(x);
    cout<<"sqare root of x is:"<<squareroot<<endl;
    return 0;
}