#include <iostream>

using namespace std;
string repertname(string s, int n) {
    if (n <= 0) {
        return "";
    }
    cout << s << endl;
    return s + repertname(s, n - 1);
}
int main() {
    repertname("Aditya", 5);
    return 0;
}