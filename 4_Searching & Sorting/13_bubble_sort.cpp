#include <iostream>
#include <vector>
using namespace std;
int print(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
}
int bubblesort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {5, 3, 0, -1, 33, 56, 4};
    bubblesort(v);
    print(v);
    return 0;
}
