#include<iostream>
#include<conio.h>
using namespace std;

#define size 8

int pos, index, arr[size], special;
int ui = size - 1; // Initialize ui to the last index of the array
int li = -1;

// Function to take data for array
void takedata() {
    cout << "Enter data for array arr" << endl;
    cin >> arr[index];
    index += 1;
}

// Function to display array elements
void display() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // Take data for array
    for (int i = 0; i < size; i++) {
        takedata();
    }

    // Input the special data and its position to be inserted at
    cout << "Enter the data and its position to be inserted at" << endl;
    cin >> special >> pos;

    // Check if position is valid
    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
        return 1; // Exit with error code
    }

    // Shift elements to the right to make space for the new element
    for (int i = ui; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the special data at the specified position
    arr[pos] = special;

    // Increment the upper index
    ui += 1;

    // Display the array
    cout << endl << "Displaying the array" << endl;
    display();

    return 0;
}
