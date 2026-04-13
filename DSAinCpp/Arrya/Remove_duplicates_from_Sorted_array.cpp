// Remove duplicates from Sorted array

//My Code Logic

#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicates(vector<int> &arr, int n) {
    vector<int> s;
    s.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            s.push_back(arr[i]);
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> result = removeDuplicates(arr, n);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}

// using striver optimal method 

// Remove duplicates from Sorted array (In-Place)
// #include <iostream>
// #include <vector>
// using namespace std;

// int removeDuplicatesInPlace(vector<int> &arr, int n) {
//     if (n == 0) return 0;
    
//     int j = 1; // position to place next unique element
//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[i-1]) {
//             arr[j] = arr[i];
//             j++;
//         }
//     }
//     return j; // new size of array
// }

// int main() {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;
    
//     vector<int> arr(n);
//     cout << "Enter " << n << " elements (sorted order): ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     cout << "\nOriginal array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
    
//     int newSize = removeDuplicatesInPlace(arr, n);
    
//     cout << "\nArray after removing duplicates: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\nNew size: " << newSize << endl;
    
//     return 0;
// }


// Watch my solution on gfg and leetcode
// https://www.geeksforgeeks.org/profile/adityaanand05
// https://leetcode.com/u/adityaanand005/
