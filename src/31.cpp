#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0)
                break;
            else
                cout << i << " ";
        }
    } else {
        cout << "The number is odd." << endl;
    }
}
