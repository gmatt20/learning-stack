#include <iostream>
using namespace std;
#include "Stack.h"

Stack::Stack(){
  top = -1;
  for(int i = 0; i < 5; i++){
    arr[i] = 0;
  }
}
void Stack::push(int val){
  if(isFull()){
    cout << "ERROR: Stack Overflow" << endl;
    exit(EXIT_FAILURE);
  }
  else{
    top++;
    arr[top] = val;
  }
}
int Stack::pop(){
  if(isEmpty()){
    cout << "ERROR: Stack Underflow" << endl;
    exit(EXIT_FAILURE);
  }
  int poppedVal = arr[top];
  arr[top] = 0;
  top--;

  return poppedVal;
}
bool Stack::isEmpty(){
  bool isEmpty = true;
  if(top != -1){
    isEmpty = false;
  }
  return isEmpty;
}
bool Stack::isFull(){
  bool isFull = false;
  if(top >= 4){
    isFull = true;
  }
  return isFull;
}
void Stack::display(){
  for(int i = 0; i < 5; i++){
    cout << arr[i] << endl;
  }
}
int Stack::peek(int index){
  if(isEmpty()){
    cout << "ERROR: Stack Underflow" << endl;
    exit(EXIT_FAILURE);
  }
  if(index < 0 || index > top){
    cout << "ERROR: Accessing out of bounds" << endl;
    exit(EXIT_FAILURE);
  }
  return arr[index];
}
int Stack::size(){
  return (top + 1);
}
void Stack::change(int index, int value){
  if(isEmpty()){
    cout << "ERROR: Stack Underflow" << endl;
    exit(EXIT_FAILURE);
  }
  if(index < 0 || index > top){
    cout << "ERROR: Accessing out of bounds" << endl;
    exit(EXIT_FAILURE);
  }
  arr[index] = value;
  cout << "value: " << value << "is now in index: " << index << endl;
}
void Stack::clear(){
  for(int i = 0; i < 5; i++){
    arr[i] = 0;
    top--;
  }
}