#include <iostream>

#if 0
Justin Iness
1/16/2022
C++ Programming
Learning about linked lists
#endif

using namespace std;

class Student {
        public:
                Student(); // constructor
		~Student(); //deconstructor
        protected:
        	char* firstName;
		char* lastName;
		int id;
		float gpa;
};

