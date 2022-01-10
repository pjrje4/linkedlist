#ifndef MEDIA_H
#define MEDIA_H
#include <cstring>

#if 0
Justin Iness
12/5/2021
C++ Programming
Learning about Classes by making a database of media
#endif

using namespace std;

class Node {
	public:
		Node(/*student*/); // constructor
		~Node(); // deconstructor
		Node* getNext() //get next Node pointer
		
		void getItems();
		vector<Item*> roomitems; // item vector 
	protected:
		char name[50]; // name of room
};
