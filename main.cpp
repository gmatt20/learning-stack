#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
  Stack stackOne;
  // cout << "Constructed Stack" << endl;
  // cout << endl;
  // stackOne.display();
  // cout << "Push 10" << endl;
  // cout << endl;
  // stackOne.push(10);
  // cout << "Stack" << endl;
  // cout << endl;
  // stackOne.display();
  // cout << "Pop" << endl;
  // cout << endl;
  // stackOne.pop();
  // stackOne.display();
  // if(stackOne.isEmpty()){
  //   cout << "List is empty" << endl;
  // }
  stackOne.push(10);
  stackOne.push(10);
  stackOne.push(10);
  stackOne.push(10);
  stackOne.push(10);
  stackOne.display();
  stackOne.push(10);

  return 0;
}