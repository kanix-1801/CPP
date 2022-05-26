#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "give me a number :";
    cin >> n;
    int count = 0;
    if (n == 0)
    {
        return 1;
    }

    while (n != 0)
    {
        n = n / 10;
        count = count + 1;
    }
    cout << count;
    return 0;
}
