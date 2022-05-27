#include <iostream>
using namespace std;

int count_digits(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    int smalloutput = 1 + count_digits(n / 10);
    return smalloutput;
}

int main()
{
    int n;
    cout << "give a number which you want to count the digits :";
    cin >> n;
    cout << count_digits(n);
    return 0;
}