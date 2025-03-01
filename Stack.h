#ifndef STACK_H
#define STACK_H

class Stack{
  private:
    int top;
    int arr[5];
  public:
    Stack();
    void push(int val);
    int pop();
    bool isEmpty();
    bool isFull();
    int peek(int index);
    int size();
    void change(int index, int value);
    void display();
    void clear();
};

#endif