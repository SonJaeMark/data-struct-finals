#ifndef STUDENT_QUEUE_H
#define STUDENT_QUEUE_H

#include <queue>
#include <string>

/**
 * @class StudentQueue
 * @brief Manages students in a cashier queue using FIFO (queue)
 */
class StudentQueue {
private:
    std::queue<std::string> students;

public:
    void addStudent(const std::string& name);
    void serveStudent();
    void showLine();
};

#endif
