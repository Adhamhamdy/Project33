#include<iostream>
using namespace std;
class node {
	char item;
	node* top, * cur, * next;
public:
	node() {
		top = NULL;
	}
	void push(char newItem) {
		node* newItemPtr = new node;
		if (newItemPtr == NULL) {
			cout << "stack push cannot accolate memory";
		}
		else {
			newItemPtr->item = newItem;
			newItemPtr->next = top;
			top = newItemPtr;
		}
	}
	bool isEmpty() {
		return top == NULL;
	}
	void pop() {
		if (isEmpty()) {
			cout << "stack empty on pop";
		}
		else {
			node* temp = top;
			top = top->next;
			temp = temp->next = NULL;
			delete temp;
		}
	}
	void pop(char& stackTop) {
		if (isEmpty()) {
			cout << "stack empty on pop";
		}
		else {
			stackTop = top->item;
			node* temp = top;
			top = top->next;
			temp = temp->next = NULL;
			delete temp;
		}
	}
	void getTop(char& stackTop) {
		if (isEmpty()) {
			cout << "stack empty on gettop";
		}
		else {
			stackTop = top->item;
		}
	}
	void display() {
		cur = top;
		cout << "\nitems in the stack : ";
		cout << "[";
		while (cur != NULL) {
			cout << cur->item;
			cur = cur->next;
		}
		cout << "] \n";
	}
};
int main()
{
	node s;
	s.push('a');
	s.push('d');
	s.push('h');
	s.push('a');
	s.push('m');
	s.display();
	char x = 'c';
	s.getTop(x);
	cout << x << endl;
}