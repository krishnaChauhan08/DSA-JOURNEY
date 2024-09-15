#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(const vector<vector<int>> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool mycomp(const vector<int> &a, const vector<int> &b)
{
    return a[1] < b[1];
}
int main()
{
    vector<vector<int>> arr = {{1, 44}, {0, 55}, {0, 22}, {0, 11}, {2, 33}};
    sort(arr.begin(), arr.end(), mycomp);
    print(arr);
    return 0;
}