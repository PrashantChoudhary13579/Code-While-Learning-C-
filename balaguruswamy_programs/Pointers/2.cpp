#include <iostream>

template<typename T>
class Stack {
private:
    static const int MAX_SIZE = 100;
    T elements[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(const T& item) {
        if (top == MAX_SIZE - 1) {
            std::cerr << "Stack overflow!" << std::endl;
            return;
        }
        elements[++top] = item;
    }

    T pop() {
        if (top == -1) {
            std::cerr << "Stack underflow!" << std::endl;
            return T(); // Return default value for type T
        }
        return elements[top--];
    }

    bool isEmpty() const {
        return top == -1;
    }
};

// Non-template function to print stack of integers
void printStack(const Stack<int>& stack) {
    std::cout << "Printing stack of integers:" << std::endl;
    while (!stack.isEmpty()) {
        std::cout << stack.pop() << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Stack of integers
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    printStack(intStack); // Calls the non-template function

    // Stack of characters
    Stack<char> charStack;
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');
    std::cout << "Printing stack of characters:" << std::endl;
    while (!charStack.isEmpty()) {
        std::cout << charStack.pop() << " ";
    }
    std::cout << std::endl;

    // Stack of floating point numbers
    Stack<double> doubleStack;
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.push(3.3);
    std::cout << "Printing stack of floating point numbers:" << std::endl;
    while (!doubleStack.isEmpty()) {
        std::cout << doubleStack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
