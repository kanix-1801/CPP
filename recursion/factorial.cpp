#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallouptut = factorial(n - 1);
    return n * smallouptut;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << '\n';
}
