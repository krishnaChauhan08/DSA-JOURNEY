#include<iostream>
#include<vector>
using namespace std;
bool searchmatrix(vector<vector<int>>&matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int n=row*col;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowindex=mid/col;
        int colindex=mid%col;
        int currnumber=matrix[rowindex][colindex];
        if(currnumber==target){
            return true;
        }
        else if(target>currnumber){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
int main()
{   vector<vector<int>>matrix={{2,4,6,8},{10,12,14,16},{18,20,22,24},{28,34,40,50}};
    int target;
    cout<<"target is:"<<endl;
    cin>>target;
    bool found=searchmatrix(matrix,target);
    if(true){
        cout<<"target is found"<<endl;
    }
    else{
        cout<<"target is not found"<<endl;
    }
    return 0;
}