#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[100];
    for (int i=0; i<100; i++)
    {
        arr[i] = rand();
    }
    for (int i=0; i<100; i++)
    {
        cout << arr[i] << " ";
    }
    //test d la ket qua output sinh so 100 so ngau nhien
    return 0;
}
