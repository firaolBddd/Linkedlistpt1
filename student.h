#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student {
        public:
//creates all the function
                Student();
                ~Student();
                char* getName();
//private storese student name
        private:
                char Name[20];
};
#endif


