#include <iostream>
using namespace std;
void printmaximum(int a, int b, int c)
{
    int ans1 = max(a, b);
    int finalAns = max(ans1, c);
    cout << "final ans is:" << finalAns << endl;
}
int main()
{
    printmaximum(5, 8, 9);
    return 0;
}