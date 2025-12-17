#include "StudentQueue.h"
#include <iostream>

using namespace std;

void StudentQueue::addStudent(const string& name) {
    students.push(name);
    cout << name << " joined the line." << endl;
}

void StudentQueue::serveStudent() {
    if (students.empty()) {
        cout << "No students in line." << endl;
    } else {
        cout << "Served: " << students.front() << endl;
        students.pop();
    }
}

void StudentQueue::showLine() {
    if (students.empty()) {
        cout << "Line is empty." << endl;
        return;
    }

    queue<string> temp = students;
    cout << "Current line: ";
    while (!temp.empty()) {
        cout << temp.front();
        temp.pop();
        if (!temp.empty()) cout << " -> ";
    }
    cout << " -> END" << endl;
}
