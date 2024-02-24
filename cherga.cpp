#include <iostream>
#include <string>

using namespace std;

class Queue{
private:
    static const int MAX_SIZE = 20;
    string queue[MAX_SIZE];
    int first;
    int last;
public:
    Queue() : first(0), last(-1) {}
    bool isEmpty() const;
    bool isFull() const;
    void enqueue(string message);
    string dequeue();
};

bool Queue::isEmpty() const{
    return first > last;    
}

bool Queue::isFull() const{
    return last == MAX_SIZE - 1;
}

void Queue::enqueue(string message){
    if(isFull()){
        cout << "Queue of messsages ovrflow\n";
        return;
    }
    queue[++last] = message;
} 

string Queue::dequeue(){
    if (isEmpty()){
        cout << "No messages in queue\n";
        return "";
    }
    return queue[first++];
}

int main(){
    Queue newQueue;
    newQueue.dequeue();
    newQueue.enqueue("Привiт");
    newQueue.enqueue("Як справи");
    while (!newQueue.isEmpty()){
        cout << newQueue.dequeue() << "\n";
    }
    return 0;
}