#include<iostream>
using namespace std;

//Writing a function for Linear Search.
void Linear(){
    int n, key;
    cout << "Enter the number of elements for the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i; // store index
            break;
        }
    }
    if (index != -1)
        cout << key << "(Element) found at index " << index << "using Linear search." << endl;
    else
        cout << "Element not found in the array." << endl;
}

//Writing a function for Binary Search.
void Binary(){
    int n, key;
    cout << "Enter the number of elements the array would contain: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements inside the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int low = 0, high = n - 1;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (index != -1)
        cout << "Element found at index " << index << "using Bubble search." << endl;
    else
        cout << "Element not found in the array." << endl;
}


int main(){
    Linear();
    Binary();
}