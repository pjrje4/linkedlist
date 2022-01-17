#include <iostream>
#include <cstring>
#include "node.h"

#if 0
Justin Iness
1/16/2022
C++ Programming
Learning about linked lists
#endif

using namespace std;

int main() { //main
	Node* first;
	Node* last;
	int index = 0;
	while (true) { //loop
		char input[20];
		cout << "Enter a command (ADD, PRINT, QUIT): ";
		cin.getline(input, 19); //user input
		if (strcmp(input, "ADD") == 0) { //add student and node
			Student* s = new Student();
			Node* current = new Node(s);
			if (index != 0) {
				last->setNext(current);
			}
			else {
				first = current;
			}
			last = current;
			index++;
		}
		else if (strcmp(input, "PRINT") == 0) { //print nodes and students
			cout << "printing" << endl;
			if (index != 0) {
				cout << "first not null" << endl;
				Node* iter = first;
				cout << "iter = first" << endl;

				if (true) {
					cout << iter->getStudent()->getFirst() << " " << iter->getStudent()->getLast() << " " << iter->getStudent()->getID() << " " << iter->getStudent()->getGPA() << endl; // output student info
					if (iter->getNext() != NULL) {
						iter = iter->getNext();
					}
					else {
						break;
					}
				}
			}
			else {
				cout << "Please add nodes before printing." << endl;
			}
		}
		else if (strcmp(input, "QUIT") == 0) { //quit program
			return 0;
        	}
	}
}
