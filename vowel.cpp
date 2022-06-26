#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void findNumberOfVowels();
string str;

int main()
{

    cin >> str;
    findNumberOfVowels();
    return 0;
}

void findNumberOfVowels()
{
    char ch;
    int count=0;
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ||
            (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
            count++;
    }
    

    cout << count<< endl;
}