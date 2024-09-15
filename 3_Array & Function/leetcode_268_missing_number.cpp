// #include <iostream>
// #include <vector>
// using namespace std;

// int missingNumber(int n, vector<int> &arr)
// {
//     int sum = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         sum += arr[i];
//     }
//     int expectedSum = (n * (n + 1)) / 2;
//     return expectedSum - sum;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 5};
//     int n = 5;
//     cout << "Missing number: " << missingNumber(n, arr) << endl;
//     return 0;
// }

#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int missing(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum = sum + arr[i];
    }
    int totalsum = ((n) * (n + 1)) / 2;
    int ans = totalsum - sum;
    return ans;
}
int main()
{
    int arr[] = {1, 8, 3, 2, 7, 5, 6};
    int n = 8;
    int missingnumber = missing(arr, n);
    cout << missingnumber;
    return 0;
}