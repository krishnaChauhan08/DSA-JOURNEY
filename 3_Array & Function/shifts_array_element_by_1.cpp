#include <iostream>
using namespace std;
void shiftArray(int arr[], int size)
{
    // using temp index
    // step 1  taking temp array
    int temp = arr[size - 1];
    // step 2
    // shift  arr[i] by arr[i-1]
    for (int i = size-1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    shiftArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}