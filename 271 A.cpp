#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n;
    int output;
    cin >> n;
    n++;
    while (n <= 90000) {
        string input = to_string(n);
        vector <int> list;
        for (int i = 0; i < input.size(); i++) {

            list.push_back(input[i]);
        }
        if (count(list.begin(), list.end(), input[0]) == 1 & count(list.begin(), list.end(), input[1]) == 1 & count(list.begin(), list.end(), input[2]) == 1 & count(list.begin(), list.end(), input[3]) == 1) {
            stringstream convert(input);
            convert >> output;
            break;
        }
        n++;
    }
    cout << output;
    
}
