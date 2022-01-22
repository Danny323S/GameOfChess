#include <iostream>
using namespace std;

bool funkcja() {
    return false;
}


int main() {
    if (!funkcja()) {
        cout << "fałsz";
    } else {
        cout << "prawda";
    }

    if (funkcja() == false) {
        cout << "fałsz";
    } else {
        cout << "prawda";
    }

}
