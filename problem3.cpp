#include <iostream>
using namespace std;
int single(int nums[], int n){
    int result = 0;
    for (int i = 0; i < n; i++){
        result^=nums[i];
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i < n; i++){
        int a;
        cin >> a;
        nums[i] = a;

    }

    cout << single(nums,n);
}