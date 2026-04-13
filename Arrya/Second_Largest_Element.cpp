// Find the Second Largest Element in an unsorted Array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int largest = arr[0];
    int second = -1;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout << second;
    return 0;
}

// Watch my solution on gfg
// https://www.geeksforgeeks.org/profile/adityaanand05