#include <iostream>
#include <string>

using namespace std;

// Структара для одного вузла
struct StackNode{
    char data; // Символ
    StackNode* next; // Посилання на наступний символ

    StackNode(char data): data(data), next(nullptr){} // Конструктор
};
// Структура для стеку
struct Stack
{
    StackNode* top; // Посилання не останнiй вузел стеку

    Stack() :top(nullptr){} // Конструктор
    // Придати на кiнець стеку 
    void push(char data){
        StackNode* newNode = new StackNode(data);
        newNode->next = top;
        top = newNode;
    }
    // Видалити останнiй вузел у стеку
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
// Функцiя для реверсу ланцюжка
string reverseString (const string& base){
    Stack newStack;

    for (char letter : base){
        newStack.push(letter); // створюэмо новий узел для кожного символу
    }
    
    string reversedString;
    
    while (!newStack.isEmpty()){
        reversedString += newStack.pop(); // вкладаэмо по символу до змiнноiЁ
    }
    return reversedString;
}
int main(){
    string base = "loshok";
    string reversed = reverseString(base);
    cout << reversed;
}




