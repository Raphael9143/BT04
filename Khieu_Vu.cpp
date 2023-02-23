#include <iostream>

bool IsPerfect(int n, int** arr);
void BubbleSort(int n, int _arr[]);

int main()
{
    int n;
    std::cout << "Nhap vao so cap khieu vu: ";
    std::cin >> n;
    int** arr = new int *[n];
    for (int i=0; i<n; i++)
    {
        arr[i] = new int [2];
    }
    std::cout << "Nhap vao mang 2 chieu cua " << n << " cap khieu vu: ";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    if (IsPerfect(n, arr))
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    return 0;
}

void BubbleSort(int n, int arr[])
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

bool IsPerfect(int n, int** arr)
{
    int _arr1[n], _arr2[n];
    for (int i=0; i<n; i++)
    {
        _arr1[i] = arr[i][0];
        _arr2[i] = arr[i][1];
    }
    BubbleSort(n, _arr1);
    BubbleSort(n, _arr2);
    for (int i=0; i<n; i++)
    {
        if (_arr1[i] <= _arr2[i])
            return false;
    }
    return true;
}
