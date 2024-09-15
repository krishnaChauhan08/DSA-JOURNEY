#include <iostream>
using namespace std;
int lastoccurence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int temp = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            temp = mid;
            s = mid + 1;
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
    return temp;
}
int main()
{
    int arr[] = {10, 20, 30, 30, 30, 50};
    int n = 6;
    int target = 30;
    int ansindex = lastoccurence(arr, n, target);
    if (ansindex == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target is found at location:" << ansindex << endl;
    }
    return 0;
}