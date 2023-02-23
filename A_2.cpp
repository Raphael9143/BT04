#include <iostream>

bool FindX(int x, int n, int arr[]);

int main()
{
    int x, n;
    std::cout << "Nhap vao so can tim: ";
    std::cin >> x;
    std::cout << "Nhap vao kich thuoc day so: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Nhap vao cac phan tu cua day: ";
    for (int i=0; i<n; i++)
    {
        std::cin >> arr[i];
    }
    if (FindX(x, n, arr))
        std::cout << "So " << x << " co xuat hien trong day!\n";
    else
        std::cout << "So " << x << " khong xuat hien trong day!\n";
    return 0;
}

bool FindX(int x, int n, int arr[])
{
    for (int i=0; i<n; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}
