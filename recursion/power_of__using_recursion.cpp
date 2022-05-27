#include <iostream>

using namespace std;

int power_of(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    int shortoutput = power_of(x, n - 1);
    return x * shortoutput;
}

int main()
{
    int x, n;
    cout << "give me x(the number which one you want to get power x^n )" << '\n';
    cin >> x;
    cout << "now give me the value of n of x^n :" << '\n';
    cin >> n;
    cout << power_of(x, n);
    return 0;
}
