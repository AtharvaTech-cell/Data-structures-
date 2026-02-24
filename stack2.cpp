#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;
void push()
{
    int value;
    if(top == MAX - 1)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        cout << "Enter value to push: ";
        cin >> value;
        top++;
        stack[top] = value;
        cout << "Pushed successfully\n";
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Push\n2. Pop\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: cout << "Exit\n"; break;
            default: cout << "Invalid choice\n";
        }
    }
    while(choice != 3);

    return 0;
}
