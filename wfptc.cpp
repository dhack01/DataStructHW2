#include <iostream>
#include "StackType.h"

using namespace std;

int WFPTagCounts(string inp) {
	int counter = 0;
	StackType<char> stack(100);
	char temp = 'a';
	for (char ch : inp) {
		if (ch == '<' || ch == '(' || ch == '[') {
			stack.Push(ch);
		}
		else if (stack.IsEmpty() != 1 && ch == ']' || stack.IsEmpty() != 1 && ch == ')' || stack.IsEmpty() != 1 && ch == '>') {
			temp = stack.Pop();
			if (ch == ')' && temp != '(' || ch == ']' && temp != '[' || ch == '>' && temp != '<') {
				return -1;
			}
			else if (ch == '>' && temp == '<') {
				counter++;
			}

		}
	}
	if (stack.IsEmpty() == 1) {
		return counter;
	}
	return -1;
	
}
/*Used bellow code to test
int main() {
	string inp;
	cout << "Please enter test case: ";
	cin >> inp;
	cout << WFPTagCounts(inp);
	return 0;
}
*/
