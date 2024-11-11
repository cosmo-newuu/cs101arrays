#include <iostream>
using namespace std;

int divisor(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < n; i++) {
        bool isDivisor = true;
        for (int j = 0; j < n; j++) {
            if (arr[j] % arr[i] != 0) {
                isDivisor = false;
                break;
            }
        }
        if (isDivisor) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        int a;
        cin >> a;

        arr[i] = a;
    }

    int result = divisor(arr, n);
    cout << result << endl;
    return 0;
}
