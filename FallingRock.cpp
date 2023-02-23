#include <iostream>
using namespace std;

bool isSurvive(int w, int h, char** land, int x, int y);

int main()
{
    int w, h;
    cin >> w >> h;
    char** land = new char *[h];
    for (int i=0; i<h; i++)
    {
        land[i] = new char [w];
    }
    int x = 0, y = 0;
    for (int i=0; i<h; i++)
    {
        for (int j=0; j<w; j++)
        {
            cin >> land[i][j];
        }
    }
    for (int i=0; i<w; i++)
    {
        if (land[0][i] == 'Y')
        {
            y = i;
            break;
        }
    }
    if (isSurvive(w, h, land, x, y))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

bool isSurvive(int w, int h, char** land, int x, int y)
{
    bool result = true;
    if (x == h-1)
        return true;
    if (x+1 < h && y+1 < w && land[x][y+1] == 'E' && land[x+1][y+1] == 'E')
        result = (isSurvive(w, h, land, x+1, y+1));
    if (x+1 < h && land[x+1][y] == 'E')
        result = (isSurvive(w, h, land, x+1, y));
    if (x+1 < h && y-1 >= 0 && land[x][y-1] == 'E' && land[x+1][y-1] == 'E')
        result = (isSurvive(w, h, land, x+1, y-1));
    if ((land[x][y+1] == 'R' || land[x+1][y+1] == 'R' || y+1 == w) && (land[x+1][y] == 'R') && (land[x][y-1] == 'R' || land[x+1][y-1] == 'R' || y-1 < 0))
            result = false;
    return result;
}
