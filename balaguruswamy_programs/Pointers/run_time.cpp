#include <iostream>
using namespace std;
template<typename T>
int linearSearch(const T arr[], int size, T key) {
    for (int i = 1; i <= size; ++i) {
        if (arr[i] == key) {
            return i; // Return index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int intKey = 3;
    float floatKey = 3.3;

    int intIndex = linearSearch(intArray, 5, intKey);
    if (intIndex != -1) {
       cout << "Integer key found at index: " << intIndex  << endl;
    } else {
       cout << "Integer key not found." << endl;
    }

    int floatIndex = linearSearch(floatArray, 5, floatKey);
    if (floatIndex != -1) {
        cout << "Float key found at index: " << floatIndex << endl;
    } else {
        cout << "Float key not found." << endl;
    }

    return 0;
}
