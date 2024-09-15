#include <iostream>
using namespace std;
int printmaximum(int n1, int n2, int n3)
{
    int ans1 = max(n1, n2);
    int finalAns = max(ans1, n3);
    return finalAns;
}
int main()
{
    int maximum = printmaximum(3, 45, 89);
    cout << "maximum is:" << maximum << endl;
}