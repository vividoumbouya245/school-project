#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        if (i % 2 == 0) {
            cout << "Number " << i << " is even" << endl;
        } else {
            cout << "Number " << i << " is odd" << endl;
        }
        i++;
    }

    return 0;
}
