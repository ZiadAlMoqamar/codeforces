#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, a;
    int maxElementIndex = 0, minElementIndex = 0;
    int countMin = 0;
    int countMax = 0;
    int output = 0;
    vector <int> list;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push_back(a);
    }
    
    maxElementIndex = max_element(list.begin(), list.end()) - list.begin();
    
    if (maxElementIndex != 0) {
        for (int i = maxElementIndex - 1; i >= 0; i--) {
            swap(list[maxElementIndex], list[i]);
            maxElementIndex = i;
            output++;
        }
    }
    minElementIndex = min_element(list.begin(), list.end()) - list.begin();
    countMin = count(list.begin(), list.end(), list[minElementIndex]);
    if (countMin > 1) {
        for (int i = 1; i < countMin; i++) {
            minElementIndex = min_element(list.begin() + 1 + minElementIndex, list.end()) - list.begin();
        }
    }
    if (minElementIndex != list.size() - 1) {
        for (int i = minElementIndex; i < list.size()-1; i++) {
            swap(list[minElementIndex], list[i+1]);
            minElementIndex = i + 1;
            output++;
        }
    }
    cout << output;
}

