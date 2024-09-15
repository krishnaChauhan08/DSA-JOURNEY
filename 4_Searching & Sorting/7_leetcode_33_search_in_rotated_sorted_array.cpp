#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <string.h>
using namespace std;
int findpivotindex(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        if (mid + 1 < n && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int binarysearch(vector<int> &arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int search(vector<int> &arr, int target)
{
    int pivotindex = findpivotindex(arr);
    int n = arr.size();
    int ans = -1;
    //  search in A
    if (target >= arr[0] && target <= arr[pivotindex])
    {
        ans = binarysearch(arr, 0, pivotindex, target);
    }
    else
    {
        ans = binarysearch(arr, pivotindex, n - 1, target);
    }

    return ans;
}

int main()
{
    vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
    int target = 8;
    int targetindex = search(arr, target);
    cout << "target index is:" << targetindex << endl;

    return 0;
}