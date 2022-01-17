#include <iostream>
#include "student.h"

#if 0
Justin Iness
1/16/2022
C++ Programming
Learning about linked lists
#endif

using namespace std;

class Node {
	public:
		Node(Student*); // paramitized constructor
		~Node(); // deconstructor
		Node* getNext(); //get next Node pointer 
		void setNext(Node*); //set the next pointer to the corresponding node pointer
		Student* getStudent();//get student pointer
	protected:
		Node* next; //next node
		Student* studentp; // student in node
};
