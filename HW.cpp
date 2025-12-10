#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

#define MAX_SIZE 100 

class Stack {
private:
    int arr[MAX_SIZE];
    int topIndex;

public:
    Stack() { topIndex = -1; }

    bool isEmpty() { return topIndex == -1; }

    bool isFull() { return topIndex == MAX_SIZE - 1; }

    // Adds value to the top of the stack
    void push(int value) {
        if (!isFull()) arr[++topIndex] = value;
    }

    // Removes and returns the top value
    int pop() {
        if (!isEmpty()) return arr[topIndex--];
        return -999; // Error code for empty stack
    }

    // Returns the top value without removing it
    int peek() {
        if (!isEmpty()) return arr[topIndex];
        return -999;
    }
};


string infixToPostfix(string expression) {
    Stack s;
    string postfix = "";

    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];

        // 1. If character is an Operand (number 0-9)
        if (c >= '0' && c <= '9') {
            postfix += c;
            postfix += " "; 
        }
        // 2. If character is '(', push to stack
        else if (c == '(') {
            s.push(c);
        }
        // 3. If character is ')', resolve the sub-expression
        else if (c == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += (char)s.pop();
                postfix += " ";
            }
            if (!s.isEmpty()) s.pop(); 
        }
        // 4. If character is an Operator (+, -, *, /, ^)
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {

            
            while (!s.isEmpty() && s.peek() != '(') {

                int precTop = 0;
                int precCurr = 0;
                char top = (char)s.peek();

                if (top == '^') precTop = 3;
                else if (top == '*' || top == '/') precTop = 2;
                else if (top == '+' || top == '-') precTop = 1;

                if (c == '^') precCurr = 3;
                else if (c == '*' || c == '/') precCurr = 2;
                else if (c == '+' || c == '-') precCurr = 1;

                
                if (precTop < precCurr) break;

                postfix += (char)s.pop();
                postfix += " ";
            }
            s.push(c);
        }
    }

    
    while (!s.isEmpty()) {
        postfix += (char)s.pop();
        postfix += " ";
    }
    return postfix;
}


// Calculates the mathematical result of the postfix string
int evaluatePostfix(string expression, bool& isValid) {
    Stack s;
    isValid = true;

    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];

        
        if (c == ' ') continue;

        // 1. If Operand: Convert char to int and Push to stack
        if (c >= '0' && c <= '9') {
            s.push(c - '0');
        }
        // 2. If Operator: Pop two numbers, Calculate, Push result
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {

            
            if (s.isEmpty()) { isValid = false; return 0; }
            int val2 = s.pop(); 

            if (s.isEmpty()) { isValid = false; return 0; }
            int val1 = s.pop(); // First operand

            int result = 0;
            // Perform the specific math operation
            if (c == '+') result = val1 + val2;
            else if (c == '-') result = val1 - val2;
            else if (c == '*') result = val1 * val2;
            else if (c == '/') {
                if (val2 == 0) { isValid = false; return 0; } 
                result = val1 / val2;
            }
            else if (c == '^') result = pow(val1, val2);

            // Push the calculation result back for the next operation
            s.push(result);
        }
    }
    
    return s.pop();
}


int main() {
    string infix;

    
    cout << "Enter infix: ";
    getline(cin, infix);

    
    string postfix = infixToPostfix(infix);

    
    bool isValid = true;
    int result = evaluatePostfix(postfix, isValid);

    
    if (isValid) {
        cout << "Postfix: " << postfix << endl;
        cout << "Result:  " << result << endl;
    }
    else {
        cout << "Error in expression." << endl;
    }
    return 0;
}