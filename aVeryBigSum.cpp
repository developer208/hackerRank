#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_arrRAY arr as parrameter.
 */

long long int aVeryBigSum(vector<long> arr)

{
    long long int temp = 0;
    for (auto it : arr)
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
    vector<long> arr(sizz);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    long long int result = aVeryBigSum(arr);
    cout << result << setprecision(10);

    return 0;
}
