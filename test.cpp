#include <iostream>
#include <string>
// TODO подключить модули и после этого удалить мейн в експортах
// #include <cherga>  
// #include <stack>


/**
 * Для спрощення коди було вирiшено
 * не використовувати google test
 * або iншi.
*/
int main(){
    // tests for stack.cpp
    string base = "Добрий день!";
    string reversed = reverseString(base);
    cout << reversed;     

    
    // tests for cherga.cpp
    Queue newQueue;
    newQueue.dequeue();
    newQueue.enqueue("Привiт");
    newQueue.enqueue("Як справи");
    while (!newQueue.isEmpty()){
        cout << newQueue.dequeue() << "\n";
    }
    return 0;
}