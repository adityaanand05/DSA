//Find the Second Largest Element in an unsorted Array


#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int largest = arr[0];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    for(int i=0;i<n;i++){
        if(largest<arr[i])
            largest = arr[i];
    }
    cout << largest;
    return 0;
}