#include <iostream>

void TongBa(int n, int arr[]);

int main()
{
    int n;
    std::cout << "Nhap vao so luong phan tu: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Nhap vao day so: ";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    TongBa(n, arr);
    return 0;
}

void TongBa(int n, int arr[])
{
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    std::cout << "Ba so co tong bang 0 la: " << arr[i] << " & " << arr[j] << " & " << arr[k] << ".";
                    return;
                }
            }
        }
    }
    std::cout << "Khong co bo 3 so nao co tong bang 0.\n";
}
