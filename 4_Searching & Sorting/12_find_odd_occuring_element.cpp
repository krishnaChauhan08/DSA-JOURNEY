#include <iostream>
#include <vector>
using namespace std;
int findoccurenceelement(vector<int> arr, int n)
{
    int s = 0;
    int e = n - 1;
    // int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
       
        else if(mid%2==0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                // ans=mid;
                e = mid;
            }
        }
         else 
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (s - e) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 5, 5, 2, 2, 3, 3, 2, 4, 4};
    int n = arr.size();
    cout<<"chal bhi rha hai"<<endl;
    int targetindex = findoccurenceelement(arr, n);
    cout << targetindex<<endl;
    return 0;
}