#include <iostream>
using namespace std;

void BubbleSort(int n, int arr[]);
int MysteryNumber(int n, int arr1[], int arr2[]);

int main()
{
    int n;
    cin >> n;
    int *arr1 = new int [n], *arr2 = new int [n+1];
    for (int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for (int i=0; i<=n; i++)
    {
        cin >> arr2[i];
    }
    BubbleSort(n, arr1);
    BubbleSort(n+1, arr2);
    cout << MysteryNumber(n, arr1, arr2);
    return 0;
}

void BubbleSort(int n, int arr[])
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int MysteryNumber(int n, int arr1[], int arr2[])
{
    for (int i=0; i<n; i++)
    {
        if (arr1[i] != arr2[i])
            return arr2[i];
    }
    return arr2[n];
}
