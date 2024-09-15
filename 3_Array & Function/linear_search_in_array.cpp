#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 8, 15, 16, 10};
    int n = 5;
    int target = 17;
    bool flag = 0;
    // 0:>not found
    // 1:>found
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            // found
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "target found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}