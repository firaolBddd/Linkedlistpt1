
//student cpp file
#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
//counstructer
Student::Student() {
}
//decsontructer
Student::~Student() {
        delete &Name;
}
//member
char* Student::getName() {
        return Name;
}

