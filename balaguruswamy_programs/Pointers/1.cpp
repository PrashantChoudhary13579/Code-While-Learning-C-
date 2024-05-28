#include <iostream>

template <typename T>
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

// Non-template function to demonstrate function overloading
void printStack(const Stack<int>& stack) {
    while (!stack.isEmpty()) {
        std::cout << stack.pop() << " ";
    }
    std::cout << std::endl;
}

// Overloaded function template
template<typename T>
void printStack(const Stack <T> & stack) {
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
    printStack(intStack); // Calls the overloaded template function

    // Stack of characters
    Stack<char> charStack;
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');
    printStack(charStack); // Calls the overloaded template function

    // Stack of floating point numbers
    Stack<double> doubleStack;
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.push(3.3);
    printStack(doubleStack); // Calls the overloaded template function

    return 0;
}
