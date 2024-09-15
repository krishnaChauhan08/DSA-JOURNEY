#include <iostream>
using namespace std;
void sortsZeroOne(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;
    // step 1  count zeros and ones
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        if (arr[i] == 1)
        {
            onecount++;
        }
    }
    // step 2  place zero first then ones
    int i;
    for (i = 0; i < zerocount; i++)
    {
        arr[i] = 0;
    }
    for (int j = i; j < size; j++)
    {
        arr[j] = 1;
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int size = 8;
    sortsZeroOne(arr, size);
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}