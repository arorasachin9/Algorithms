#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {8, 13, 20, 49, 54, 57, 60, 62, 62, 66, 69, 70, 80, 86, 87, 87, 92, 95, 99, 100};
    int n = sizeof(arr) / sizeof(int);
    int key = 101;
    int jump = sqrt(n);
    int i = 0, j;
    while (arr[i] < key && i < n)
    {
        i += jump;
    }
    for (j = i - jump; j <= min(i, n - 1); j++)
    {
        if (arr[j] == key)
        {
            cout << key << " is present at position " << j + 1 << endl;
            break;
        }
    }
    if (j > i || j >= n)
    {
        cout << key << " is not present in the array" << endl;
    }
}