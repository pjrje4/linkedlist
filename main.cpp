#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

#if 0
Justin Iness
1/16/2022
C++ Programming
Learning about linked lists
#endif

using namespace std;

int main() { //main
	while (true) { //loop
		char input[20];
		cout << "Enter a command (ADD, SEARCH, DELETE, QUIT): ";
		cin.getline(input, 19); //user input
		if (strcmp(input, "ADD") == 0) { //add student and node
			//add nodes
		}
		else if (strcmp(input, "PRINT") == 0) { //print nodes and students
			//print nodes
		}
		else if (strcmp(input, "QUIT") == 0) { //quit program
			return 0;
        	}
	}
}
