#include <iostream>
using namespace std;

int main() {
    int age = 18;
    bool student = true;
    
    if (student && age > 18) {
        cout << "You are an adult.";
    } else {
        cout << "You are a minor.";
    }
    
    return 0;
}
