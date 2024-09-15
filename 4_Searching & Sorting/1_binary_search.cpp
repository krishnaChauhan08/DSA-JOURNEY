#include <iostream>
using namespace std;
int binarysearch(int arr[], int target, int n)
{
    int s = 0;
    int e = n - 1;
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
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int target = 50;
    int n = 9;
    int ansindex = binarysearch(arr, target, n);
    if (ansindex == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found at index:" << ansindex << endl;
    }
    return 0;
}