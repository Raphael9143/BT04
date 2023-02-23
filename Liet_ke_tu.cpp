#include <iostream>
#include <string>

void LietKe(std::string text);

int main()
{
    std::string text;
    std::cin >> text;
    LietKe(text);
    return 0;
}

void LietKe(std::string text)
{
    int len = text.size();
    char chr1, chr2;
    for (int i=0; i<len-1; i++)
    {
        for (int j=i+1; j<len; j++)
        {
            chr1 = text[i];
            chr2 = text[j];
            std::cout << chr1 << chr1 << " " <<
                        chr1 << chr1 << chr1 << " " <<
                        chr1 << chr1 << chr2 << " " <<
                        chr1 << chr2 << " " <<
                        chr1 << chr2 << chr1 << " " <<
                        chr1 << chr2 << chr2 << " " <<
                        chr2 << chr1 << " " <<
                        chr2 << chr1 << chr1 << " " <<
                        chr2 << chr1 << chr2 << " " <<
                        chr2 << chr2 << " " <<
                        chr2 << chr2 << chr1 << " " <<
                        chr2 << chr2 << chr2 << " ";
        }
    }
}
