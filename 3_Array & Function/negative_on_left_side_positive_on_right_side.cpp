#include <iostream>
using namespace std;
void shiftarrayoneside(int arr[], int size)
{
    int j = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[] = {-5,
                 2,
                 -5,
                 -4,
                 -8,
                 4,
                 -6,
                 -1};
    int size = 8;
    shiftarrayoneside(arr, size);
    cout << "print the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}