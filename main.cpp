//Firaol berehanu
// Linkedlist part one
//THis read in names of the first student
// and stores them
//Decmber 1
#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include "student.h"
#include "node.h"
using namespace std;
int main() {
        //Student Class
        char input[20];
//setup for stuednet name insert
        Student* student1 = new Student;
        cout << "First Student Name? " << endl;
        cin.get(student1 -> getName(), 20);
        cin.get();
//another student name
        Student* student2 = new Student;
        cout << "Second Student Name? " << endl;
        cin.get(student2 -> getName(), 20);
        cin.get();
// prompts
        cout << "Student 1 Name is: " << student1 -> getName() << endl;
        cout << "Student 2 Name is: " << student2 -> getName() << endl;
        //Nodes
        Node* node1 = new Node(student1);
        Node* node2 = new Node(student2);
        node1 -> setStudent(student1);
        } 

