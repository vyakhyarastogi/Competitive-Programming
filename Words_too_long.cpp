#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string words;
        cin >> words;

        if (words.length() >= 10)
        {
            char s1 = words[0];
            char s2 = words[words.length() - 1];
            int count = 1;
            for (int i = 1; i < words.length() - 2; i++)
            {
                count++;
            }
            cout << s1 << count << s2 << endl;
        }
        else
        {
            cout << words << endl;
        }
    }
}