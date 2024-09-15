#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout<<"value of array index:"<<i<<endl;;
        cin >> arr[i];
    }

    cout << "print the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}