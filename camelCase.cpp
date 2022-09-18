#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
int camelcase(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */

        if (isupper(s[i]))
        {
            count++;
        }
    }
    return count + 1;
}

int main()
{

    string s;
    getline(cin, s);

    int result = camelcase(s);
    cout << camelcase(s);

    return 0;
}
