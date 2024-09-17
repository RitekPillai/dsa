#include <iostream>
using namespace std;

void Binarysearch(int array[], int size) {
    int element;
    cout << "Enter the value you want to search: ";
    cin >> element;

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == element) {
            cout << "The element " << element << " found at index " << mid << endl;
            return;
        } else if (array[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Element not found in the array." << endl;
}

// Function to display the array
void display(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements you want to enter in the array: ";
    cin >> n;

    int array[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Array: ";
    display(array, n);
    cout << endl;

    Binarysearch(array, n);

    return 0;
}