#include <iostream>
using namespace std;


    void reverseString(string & str)
    {
        int n = str.length();

        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
    }

    int main()
    {
        string str;

        cout << "insert a word and i shall reverse it!: ";
        cin >> str;

        reverseString(str);
        cout << "your word reversed is: " << str;
        return 0;
    }