#include <iostream>
using namespace std;
void printsum(int a, int b, int c)
{
    int answer = a + b + c;
    cout << "sum is:" << answer << endl;
}

int main()

{
    printsum(1, 2, 7);
    return 0;
}