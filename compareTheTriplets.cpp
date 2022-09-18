#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> r;
    int alice = 0;
    int bob = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            alice++;
        }
        else if (a[i] < b[i])
        {
            bob++;
        }
        else
        {
        }
    }
    r.push_back(alice);
    r.push_back(bob);
    return r;
}

int main()
{

    vector<int> a(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);
    for (auto it : result)
    {
        /* code */
        cout << it << " ";
    }

    return 0;
}
