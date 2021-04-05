#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a;

    vector <int> list;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        int index = find(list.begin(), list.end(), i) - list.begin() +1;
        cout << index << ' ';

    }
}
