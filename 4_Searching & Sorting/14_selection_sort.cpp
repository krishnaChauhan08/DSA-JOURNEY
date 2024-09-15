#include <iostream>
#include <vector>
using namespace std;
int print(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
int selectionsort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minindex])
            {
                minindex = j;
            }
        }
        swap(v[i], v[minindex]);
    }
}

int main()
{
    vector<int> v = {44, 33, 55, 22, 11};
    selectionsort(v);
    print(v);
    return 0;
}