#include <iostream>
#include <limits.h>
using namespace std;
int findminimuminarray(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{

    int arr[] = {58, 1, 5, 0, 6, 7, 5, 6};
    int size = 8;
    int minimum = findminimuminarray(arr, size);
    cout << "minimum number is" << minimum << endl;
    return 0;
}