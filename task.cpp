#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty() || prices.size() < 2)
    {
        return 0;
    }

    int min_p = prices[0];
    int max_p {};

    for (auto i : prices)
    {
        max_p = max(max_p, i - min_p);
        min_p = min(min_p, i);
    }

    return max_p;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices1) << endl;
    return 0;
}