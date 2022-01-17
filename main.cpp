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
	int index = 0; // index
	Student* s1 = new Student(); // student 1 node
	Node* first = new Node(s1);
	index++;

	Student* s2 = new Student(); // student 2 node
        Node* second = new Node(s2);
	first->setNext(second);
	index++;

        Student* s3 = new Student(); // student 3 node
        Node* third = new Node(s3);
	second->setNext(third);
	index++;

	Node* iter = first; // iterator
	
	cout << iter->getStudent()->getFirst() << " " << iter->getStudent()->getLast() << " " << iter->getStudent()->getID() << " " << iter->getStudent()->getGPA() << endl; // output student info
	iter = iter->getNext(); // next 
	cout << iter->getStudent()->getFirst() << " " << iter->getStudent()->getLast() << " " << iter->getStudent()->getID() << " " << iter->getStudent()->getGPA() << endl; // output student info
        iter = iter->getNext(); // next
	cout << iter->getStudent()->getFirst() << " " << iter->getStudent()->getLast() << " " << iter->getStudent()->getID() << " " << iter->getStudent()->getGPA() << endl; // output student info
	return 0;
}
