#include <bits/stdc++.h>

using namespace std;

class Bubble {
public:
	int number = 0;
	Bubble* leftBubble = nullptr;
	Bubble* RightBubble = nullptr;
	Bubble(int k) {
		this->number = k;
	}
};

class BinarySearchTree {
private:
	Bubble* start ;
public:
	BinarySearchTree() { start = nullptr; }
	Bubble* getStart() {
		return start;
	}
	Bubble* insert(Bubble* parent, int key) {
		Bubble* temp;
		if (parent == nullptr) {
			temp =new Bubble(key);
			if (start == nullptr) {
				start = temp;
			}
			return temp;
		}
		if (key < parent->number) {
			parent->leftBubble = insert(parent->leftBubble, key);
		}
		else if (key > parent->number) {
			parent->RightBubble = insert(parent->RightBubble, key);
		}
		return parent;
	}
	int getHeight(Bubble* parent) {
		int leftHeight=0, rightHeight=0;
		if (parent == nullptr) {
			return 0;
		}
		leftHeight = getHeight(parent->leftBubble);
		rightHeight = getHeight(parent->RightBubble);
		if (leftHeight > rightHeight) {
			return leftHeight + 1;
		}
		else {
			return rightHeight + 1;
		}
	}
	string balanceCheck(Bubble* parent) {
		int leftHeight, rightHeight;
		if (parent == nullptr) {
			return "YES";
		}
		leftHeight = getHeight(parent->leftBubble);
		rightHeight = getHeight(parent->RightBubble);
		if (abs(rightHeight - leftHeight) <= 1) {
			if (balanceCheck(parent->leftBubble) == "YES" && balanceCheck(parent->RightBubble) == "YES") {
				return "YES";
			}
			else {
				return "NO";
			}
		}
		else {
			return "NO";
		}
	}
};
int main()
{
	BinarySearchTree bst;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tempo;
		cin >> tempo;
		bst.insert(bst.getStart(),tempo);
	}
	if (bst.balanceCheck(bst.getStart()) == "YES") {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

