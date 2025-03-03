#include <stdio.h> // Include standard input/output library
#include <string.h> // Include string library for strlen function

// Function to check if an expression is correctly parenthesized or not
int checkBalanced(char *str) {
    // Calculate the length of the input string
    int len = strlen(str);

    // Initialize top variable to -1, indicating an empty stack
    int top = -1;

    // Create a stack array of size equal to the length of the input string
    char stack[len];

    // Iterate over each character in the input string
    for (int i = 0; i < len; i++) {
        // Store the current character in variable ch
        char ch = str[i];

        // Check if the current character is an opening parenthesis
        if (ch == '(' || ch == '{' || ch == '[') {
            // Push the opening parenthesis onto the stack
            stack[++top] = ch;
        } else {
            // Check if the current character is a closing parenthesis
            if (ch == ')' || ch == '}' || ch == ']') {
                // Check if the stack is empty (i.e., top is -1)
                if (top == -1) {
                    // If the stack is empty, return 0 (indicating an unbalanced expression)
                    return 0;
                } else {
                    // Check if the top element of the stack matches the current closing parenthesis
                    if ((ch == ')' && stack[top] != '(') ||
                        (ch == '}' && stack[top] != '{') ||
                        (ch == ']' && stack[top] != '[')) {
                        // If the top element does not match, return 0 (indicating an unbalanced expression)
                        return 0;
                    } else {
                        // If the top element matches, pop it from the stack
                        top--;
                    }
                }
            }
        }
    }

    // After iterating over the entire string, check if the stack is empty (i.e., top is -1)
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char str[100]; // character array to store the input string
    printf("Enter expression: "); // Prompt the user to enter an expression
    fgets(str, sizeof(str), stdin);// Read the input string using fgets (safer than gets)
    str[strcspn(str, "\n")] = 0;// Remove the newline character from the input string
    int result = checkBalanced(str);// checkBalanced function to check if the input expression is balanced
    if (result == 1) { // if result is true
        printf("Balanced");
    } else {
        printf("Not Balanced");
    }
    return 0;
}


