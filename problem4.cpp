#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    int prices[n];
    for (int i=0; i < n; i++){
        int a;
        cin >> a;
        prices[i] = a;

    }
    cout << maxProfit(prices, n);
    return 0;


}
