#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr, n);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
