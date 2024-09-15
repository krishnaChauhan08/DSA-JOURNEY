#include <iostream>
#include <vector>
#include <limits>
#include<algorithm>
using namespace std;
vector<int> rowandmaximumones(vector<vector<int>> &mat)
{
    vector<int> ans;
    int n = ans.size();
    // one count->will store max number pf 1's in a row
    int onecount = numeric_limits<int>::min();
    // row no->will store index of max number of 1's wali row
    int rowno = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }

        // after row completion compare the count witn one count
        if (count > onecount)
        {
            onecount = count;
            rowno = i;
        }
    }
    ans.push_back(rowno);
    ans.push_back(onecount);
    cout<<rowno<<endl;
    cout<<onecount<<endl;
    
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0, 0}, {0, 1, 1, 0}, {0, 1, 1, 0}, {1, 1, 1, 0}};
    vector<int> maximum = rowandmaximumones(mat);
    cout <<maximum[1]<<endl;
    

    return 0;
}