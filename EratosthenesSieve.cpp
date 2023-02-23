#include <iostream>
using namespace std;

void EratosthenesSieve(int n);

int main()
{
    int n;
    cin >> n;
    EratosthenesSieve(n);
    return 0;
}

void EratosthenesSieve(int n)
{
    if (n == 1)
        return;
    else
        cout << 2 << " ";
    bool isPrime = true;
    for (int i=3; i<=n; i++)
    {
        for (int j=2; j<=n/2; j++)
        {
            if (i%j == 0)
                isPrime = false;
        }
        if (isPrime)
            cout << i << " ";
        isPrime = true;
    }
}
