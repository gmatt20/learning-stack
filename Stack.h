#ifndef STACK_H
#define STACK_H

class Stack{
  private:
    int top;
    int arr[5];
  public:
    Stack();
    void push();
    void pop();
    bool isEmpty();
    bool isFull();
    int peek();
    int size();
    void change();
    void display();

};

#endif