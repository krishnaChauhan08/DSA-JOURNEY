#include <iostream>
using namespace std;
int getUnique(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {12, 25, 12, 25, 4, 6, 6};
    int size = 7;
    int finalAns = getUnique(arr, size);
    cout << "unique element is:" << finalAns << endl;
    return 0;
}