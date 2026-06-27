#include <iostream>
using namespace std;

int f(int a, int b)
{
    return a + b;
}

int main()
{
    int result = f(70, 30);

    cout << "Sum = " << result << endl;

    return 0;
}