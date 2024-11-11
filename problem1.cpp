// main.cpp
#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i=0; i < n; i++){
        int a;
        cin >> a;
        arr1[i] = a;
    }
    for (int i=0; i < n; i++){
        int b;
        cin >> b;
        arr2[i] = b;
    }
    for (int i=0; i<n; i++){
        sum += arr1[i]*arr2[i];
    }
    cout << sum;

    return 0;
}
