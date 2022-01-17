#include "node.h"
#include <iostream>

#if 0
Justin Iness
1/16/2022
C++ Programming
Learning about linked lists
#endif

using namespace std;

Node::Node(Student* s) { // parametized constructor
	this->studentp = s;
}
Node::~Node() { // destructor
	cout << "Node destructor called" << endl;
}

//getters and setters
Node* Node::getNext() {
	return this->next;
}
void Node::setNext(Node* nn) {
	this->next = nn;
}
Student* Node::getStudent() {
	return this->studentp;
}
