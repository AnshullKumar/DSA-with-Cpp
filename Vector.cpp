#include<iostream>
#include<vector>
using namespace std;
int vec(){
    vector<int> v(5,10);
    cout << "For loop using C++ STL...";
    for (int i: v) {  
        cout << i << " ";
    }
    cout << "For loop with no==standard form..";
    for(int i = 0; i < 5; i++){
        cout << v[i] << " ";
    } 
    return 0;
}

int stack(){
    vector<int> v(5);
    cout << "Enter elements for the array: " << endl;
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    cout << "Printing the array..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.pop_back();
    v.push_back(3);
    cout << endl <<"Printing the array after operations..." << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
}

int reverse(){
    vector<int> vec = {1,2,3,4};
    int n = vec.size();
    cout << "Printing the original array..." << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }

    cout << endl << "Performing the reversing operation..." << endl;
    for(int i = 0; i < n / 2; i++){
        int temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }
    cout << "Reversed array..." << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }

}

int main(){
    //vec();
    //stack();
    //reverse();
}
