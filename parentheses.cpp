#include <bits/stdc++.h>;

using namespace std;
int main()
{
	stack<char> parentheses;
	int n;
	vector<string> output;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char> parentheses;
		string inp;
		cin >> inp;
		output.push_back("YES");
		for (int j = 0; j < inp.length(); j++) {
			switch (inp[j])
			{
			case '(': {
					parentheses.push(inp[j]);
					break;
				}
			case '{': {
				parentheses.push(inp[j]);
				break;
			}
			case '<': {
				parentheses.push(inp[j]);
				break;
			}
			case '[': {
				parentheses.push(inp[j]);
				break;
			}
			case ')': {
				if (parentheses.size() == 0) {
					output[i]="NO";
					break;
				}
				else {
					char stk = parentheses.top();
					if (stk == '(') {
						parentheses.pop();
						break;
					}
					else {
						output[i] = "NO";
						break;
					}
				}
			}
			case '}': {
				if (parentheses.size() == 0) {
					output[i] = "NO";
					break;
				}
				else {
					char stk = parentheses.top();
					if (stk == '{') {
						parentheses.pop();
						break;
					}
					else {
						output[i] = "NO";
						break;
					}
				}
			}
			case '>':
			{
				if (parentheses.size() == 0) {
					output[i] = "NO";
					break;
				}
				else {
					char stk = parentheses.top();
					if (stk == '<') {
						parentheses.pop();
						break;
					}
					else {
						output[i] = "NO";
						break;
					}
				}
			}
			case ']': {
				if (parentheses.size() == 0) {
					output[i] = "NO";
					break;
				}
				else {
					char stk = parentheses.top();
					if (stk == '[') {
						parentheses.pop();
						break;
					}
					else {
						output[i] = "NO";
						break;
					}
				}
			}
			default:
				break;
			}
		if (output[i] == "NO") {
				break;
		}
		}
		if (parentheses.size() != 0) {
			output[i] = "NO";
		}

	}

	for (int i = 0; i < n; i++) {
		cout << output[i] << endl;
	}
	return 0;
}

