#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    int arr[5] = {15, 25, 13, 2, 8};
    int size = 5;
    int target = 15;
    bool ans = linearsearch(arr, size, target);
    if (ans == 1)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}