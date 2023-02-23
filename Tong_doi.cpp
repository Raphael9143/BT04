#include <iostream>

void TongDoi(int n, int arr[]);

int main()
{
    int n;
    std::cout << "Nhap vao so phan tu cua day: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Nhap vao day so: ";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    TongDoi(n, arr);
    return 0;
}

void TongDoi(int n, int arr[])
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                std::cout << "Cap so co tong bang 0 la: " << arr[i] << " & " << arr[j] << ".";
                return;
            }
        }
    }
    std::cout << "Khong tong tai cap so co tong bang 0.\n";
}
