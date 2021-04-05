#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, a, sum =0;
    int myMoney = 0;
    int output = 0;
    vector <int> list;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        list.push_back(a);
    }
    sort(list.begin(), list.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (myMoney <= sum - myMoney) {
            myMoney += list[i];
            output++;
        }
        else {
            break;
        }
    }
    cout << output;
}
