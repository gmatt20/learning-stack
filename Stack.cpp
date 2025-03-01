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
void Stack::pop(){
  if(isEmpty()){
    cout << "ERROR: Stack Underflow" << endl;
    exit(EXIT_FAILURE);
  }
  arr[top] = 0;
  top--;
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