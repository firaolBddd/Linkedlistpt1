
// this is the node.cpp where you run the code that was promepted
#include "node.h"
Node::Node(Student* s) : student(s), next(0) {}
Node::~Node() {
   //sets all of the function
}
void Node::setStudent(Student* s) {
    student = s;
}
void Node::setNext(Node* n) {
    next = n;
}
Student* Node::getStudent() {
    return student;
}
Node* Node::getNext() {
    return next;
}

