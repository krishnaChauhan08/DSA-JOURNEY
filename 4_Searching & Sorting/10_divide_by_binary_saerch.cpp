#include<iostream>
#include<vector>
using namespace std;
int getquotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{   int divisor;
    int dividend;
    cout<<"divisor is:"<<endl;
    cin>>divisor;
    cout<<"dividend is:"<<endl;
    cin>>dividend;
    int quotient=getquotient(abs(divisor),abs(dividend));
    if((divisor>0)&&(dividend<0)||(divisor<0)&&(dividend>0)){
        quotient=0-quotient;
    }
    cout<<"quotient is:"<<quotient<<endl;
    return 0;
}