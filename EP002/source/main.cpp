#include <iostream>
using namespace std;

int f(int a, int b)
{
    return a + b;
}

int main()
{
    int result = f(7, 5);

    cout << "Sum = " << result << endl;

    return 0;
}