#include <iostream>
using namespace std;
void countzeroone(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            onecount++;
        }
        if (arr[i] == 0)
        {
            zerocount++;
        }
    }
    cout << "zerocount:" << zerocount << endl;
    cout << "onecount:" << onecount << endl;
}

int main()
{
    int arr[] = {1, 0, 1, 0, 0, 1, 0, 0};
    // zero 5
    // one  3
    int size = 8;
    countzeroone(arr, size);
    return 0;
}