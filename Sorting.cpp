#include<iostream>
using namespace std;

// Writing a function for BubbleSort.
void Bubblesort(){
    int n;
    cout << "Enter the no. of elements in the Array: " << endl;
    cin >> n;
    int arr[100];
    cout << "Enter elements: " << endl;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
        if (arr[j]>arr[j+1])
            {   int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }    
    }
    
    cout << "Sorted array: " << endl;
    for(int i = 0; i < n;i++){
            cout << arr[i] << " ";
    }
}

int main(){
    Bubblesort();
}