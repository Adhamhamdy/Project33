#include<iostream>
using namespace std;
const int MAX = 100;
class stack {
private:
	int top;
	int item[MAX];
public:
	stack():top(-1){}
	void push(int x) {
		if (top >= MAX - 1) {
			cout << "Stack Is Fulled on push";
		}
		else {
			top++;
			item[top] = x;
		}
	}
	bool isEmpty() {
		if (top == -1) {
			return true;
		}
		else {
			return false;
		}
	}
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty on pop";
		}
		else {
		    item[top];
			top--;
		}
	}
	void print() {
		cout << "[";
		for (int i = top;i >= 0;i--) {
			cout << item[i] << " ";
		}
		cout << "]";
		cout << endl;
	}
	void getMin() {
		int smallest = item[0];
		for (int i = 0;i < MAX;i++) {
			item[i] = smallest;
		}
		cout << smallest << endl;
	}
};
int main() {
	stack s;
	s.push(5);
	s.push(10);
	s.push(15);
	s.pop();
	s.push(50);
	s.print();
	s.getMin();
}