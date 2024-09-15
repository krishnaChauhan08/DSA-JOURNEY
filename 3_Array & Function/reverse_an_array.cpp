#include <iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    reversearray(arr, size);
    return 0;
}