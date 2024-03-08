#ifndef Cherga_H
#define Cherga_H

#include <string>
#include <iostream>

class Queue {
private:
    static const int MAX_SIZE = 20;
    std::string queue[MAX_SIZE]; // Use std::string instead of string
    int first;
    int last;
public:
    Queue() : first(0), last(-1) {}
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(std::string message); // Use std::string instead of string
    std::string dequeue();
};

bool Queue::isEmpty() const {
    return first > last;    
}

bool Queue::isFull() const {
    return last == MAX_SIZE - 1;
}

void Queue::enqueue(std::string message) {
    if(isFull()){
        std::cout << "Queue of messsages overflow\n";
        return;
    }
    queue[++last] = message;
} 

std::string Queue::dequeue() {
    if (isEmpty()){
        std::cout << "No messages in queue\n";
        return "";
    }
    return queue[first++];
}

#endif
