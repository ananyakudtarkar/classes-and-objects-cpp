#include <iostream>
using namespace std;

class ArrayOps {
public:
    void reverseArray(int arr[], int size);
};

void ArrayOps::reverseArray(int arr[], int size) {
    cout << "Reversed Array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 3, 6, 18, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayOps obj;
    obj.reverseArray(arr, size);

    return 0;
}

/*
OUTPUT
Reversed Array: 12 18 6 3 9 
*/
