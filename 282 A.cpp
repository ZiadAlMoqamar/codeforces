#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int output = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        if (input[1] == '+') {
            output++;
        }
        else
        {
            output--;
        }

    }
    cout << output;

}
