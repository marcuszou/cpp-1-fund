#include <iostream>

using namespace std;

/*
 * Arrays
 */

int main() {
    cout << "Understanding size: " << endl;
    // size_t = unsigned long long
    int numbers[] = {10, 20, 30};
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::mai() << endl;
    cout << numeric_limits<size_t>::max() << endl;

    return 0;
}
