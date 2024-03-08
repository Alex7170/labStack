#include <iostream>
#include <string>
#include "stack.h"
#include "cherga.h"

using namespace std;

int main() {
    // Tests for stack.cpp
    string base = "Добрий день!";
    string reversed = reverseString(base);
    cout << reversed << endl;

    // Tests for cherga.cpp
    Queue newQueue;
    newQueue.dequeue();
    newQueue.enqueue("Привiт");
    newQueue.enqueue("Як справи");
    while (!newQueue.isEmpty()) {
        cout << newQueue.dequeue() << "\n";
    }
    return 0;
}
