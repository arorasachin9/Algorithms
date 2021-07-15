#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {8, 13, 20, 49, 54, 57, 60, 62, 62, 66, 69, 70, 80, 86, 87, 87, 92, 95, 99, 100};
    int n = sizeof(arr) / sizeof(int);
    int key = 100, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (key == arr[mid])
        {
            cout << key << " is found at position " << mid + 1 << endl;
            break;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (l > r)
    {
        cout << key << " is not present in array" << endl;
    }
    return 0;
}