#include <iostream>
#include <math.h>
using namespace std;

//cach 1
int main()
{
    int n;
    cin >> n;
    int board[n][n], pos[n][2];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2; j++)
        {
            cin >> pos[i][j];   //nhap toa do cac quan hau
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            board[i][j] = 0;    //tao ban co
        }
    }
    for (int i=0; i<n; i++)
    {
        board[pos[i][0]][pos[i][1]] = 1;    //vi tri cac quan hau
    }
    int row_cnt = 0, col_cnt = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (board[i][j] == 1)
                row_cnt++;          //dem so con hau tren tung hang
            if (board[j][i] == 1)
                col_cnt++;          //dem so con hau tren tung cot
            if (row_cnt > 1 || col_cnt > 1)
            {
                cout << "No\n";
                return 0;
            }
        }
        row_cnt = 0;
        col_cnt = 0;
    }
    //dem so con hau tren tung duong cheo
    int diag_cnt = 0;
    for (int i=0; i<n-2; i++)
    {
        int j=0;
        while (i+j < n)
        {
            if (board[i+j][j] == 1)
                diag_cnt++;
            j++;

        }
        if (diag_cnt > 1)
        {
            cout << "No\n";
            return 0;
        }
        diag_cnt = 0;
        int k=0;
        while (i+k < n)
        {
            if (board[k][i+k] == 1)
                diag_cnt++;
            k++;
        }
        if (diag_cnt > 1)
        {
            cout << "No\n";
            return 0;
        }
        diag_cnt = 0;
    }
    return 0;
}

//cach 2
/*int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if ((arr[i][0] == arr[j][0]) || (arr[i][1] == arr[j][1]) || (arr[i][0] - arr[j][0] == arr[i][1] - arr[j][1]) || (arr[i][0] - arr[j][0] == arr[j][1] - arr[i][1]))
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}
*/
