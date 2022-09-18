#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long long  int aVeryBigSum(vector<long> ar)

{
    long long  int temp = 0;
    for (auto it : ar)
    {
        /* code */
        
        temp = temp + it;
    }

    return temp;
}

int main()
{

    int sizz;
    cin >> sizz;
    vector<long> ar(sizz);

    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }
    long long  int result = aVeryBigSum(ar);
    cout << result<<setprecision(10);

    return 0;
}
