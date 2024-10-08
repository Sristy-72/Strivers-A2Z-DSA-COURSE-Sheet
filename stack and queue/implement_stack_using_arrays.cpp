//GFG PROBLEM
// Write a program to implement a Stack using Array. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. The push() method takes one argument, an integer 'x' to be pushed into the stack and pop() which returns an integer present at the top and popped out from the stack. If the stack is empty then return -1 from the pop() method.

// Note: The input is given in form of queries. Since there are two operations push() and pop(), there is two types of queries as described below:
// (i) 1 x   (a query of this type means  pushing 'x' into the stack)
// (ii) 2     (a query of this type means to pop an element from the stack and print the popped element)


void MyStack ::push(int x) {
     if (top < 999) {    // Checking if stack is not full
            top++;
            arr[top] = x;
        } else {
            cout << "Stack Overflow" << endl;
        }
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
     if (top == -1) {   // Checking if stack is empty
            return -1;
        } else {
            int poppedElement = arr[top];
            top--;
            return poppedElement;
        }
}
