#include <iostream>

using namespace std;
int countnum(int i, int n) {
    if (i == n+1) {
        return 0;
    }
    cout << i << endl;
    return countnum(i+1,n);
}
int main() {
    countnum(1, 5);
    return 0;
}