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
  top++;
  arr[top] = val;
}
void Stack::display(){
  for(int i = 0; i < 5; i++){
    cout << arr[i] << ", ";
  }
  cout << endl;
}