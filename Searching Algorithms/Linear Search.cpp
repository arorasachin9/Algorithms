#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {99, 83, 45, 57, 20, 96, 84, 75, 83, 22, 96, 5, 47, 85, 29, 26, 10, 69, 73, 70};
    int n = sizeof(arr) / sizeof(int);
    int key = 73, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is found at position " << i + 1 << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << key << " is not present in the array" << endl;
    }
    return 0;
}