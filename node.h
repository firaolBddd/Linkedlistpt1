//header file for the nodes in the linked list
#ifndef NODE_H
#define NODE_H
//uses student.h
#include "student.h"
//usebale casue public
class Node {
public:
    Node(Student*);
    ~Node();
    void setStudent(Student*);
    void setNext(Node*);
    Student* getStudent();
    Node* getNext();
//these stay here
private:
    Student* student;
    Node* next;
};
#endif // NODE_H

