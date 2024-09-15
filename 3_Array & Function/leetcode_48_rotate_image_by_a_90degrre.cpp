#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // transpose
    for (int i = 0; i < n; i++)
    {
        // n ki jageh mai matrix[i].size bhi likh skta hu for innner loop
        for (int j = i; j < n; j++)  
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse the each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] ;
        }
        cout << endl;
    }
    return 0;
}

// // }

// #include <iostream>
// #include<vector>
// #include<limits>
// using namespace std;
// int rotate(vector<int> &matrix[][3], int n)
// {
//     // transpose
//     for (i = 0; i < n; i++)
//     {
//         for (j = i; j < n; j++)
//         {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         reverse[matrix,matrix+n];
//     }
// }

// int main()
// {
//     int matrix[][] = {
//         {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     int n = sizeof(matrix);
//     rotate(matrix, n);

//     return 0;
// }
