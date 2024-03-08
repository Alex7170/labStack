#ifndef Stack_H
#define Stack_H

#include <string>

struct StackNode {
    char data;
    StackNode* next;

    StackNode(char data): data(data), next(nullptr) {}
};

struct Stack {
    StackNode* top;

    Stack() :top(nullptr) {}

    void push(char data){
        StackNode* newNode = new StackNode(data);
        newNode->next = top;
        top = newNode;
    }

    char pop(){
        char data = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        return data;
    }

    bool isEmpty(){
        return (top == nullptr);
    }
};

std::string reverseString(const std::string& base) {
    Stack newStack;

    for (char letter : base) {
        newStack.push(letter);
    }
    
    std::string reversedString;
    
    while (!newStack.isEmpty()) {
        reversedString += newStack.pop();
    }
    return reversedString;
}

#endif
