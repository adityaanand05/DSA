// Check if array is sorted or not

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j < n; j++)
    {
        if (arr[j] >= arr[j - 1])
        {
        }
        else
        {
            cout << "Not Sorted";
            return 0;
        }
    }
    cout << "Sorted";
    return 0;
}

// Watch my solution on gfg
// https://www.geeksforgeeks.org/profile/adityaanand05
