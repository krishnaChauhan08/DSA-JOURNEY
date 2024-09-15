#include <iostream>
#include <vector>
using namespace std;
void sortcolors(vector<int> &num)
{
    int n = num.size();
    int index = 0;
    int left = 0;
    int right = n - 1;
    while (index <= right)
    {
        if (num[index] == 0)
        {
            swap(num[index], num[left]);

            left++;
            index++;
        }

        else if (num[index] == 2)
        {
            swap(num[index], num[right]);
            right--;
        }
        else
        {
            index++;
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    sortcolors(v);
    cout << "array is" << " " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}