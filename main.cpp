#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
  int testCase;
  cout << "Enter test case: ";
  cin >> testCase;
  if(testCase == 1){
      Stack stackOne;
      cout << "Constructed Stack" << endl;
      cout << endl;
      stackOne.display();
      cout << "Push 10" << endl;
      cout << endl;
      stackOne.push(10);
      cout << "Stack" << endl;
      cout << endl;
      stackOne.display();
      cout << "Pop" << endl;
      cout << endl;
      stackOne.pop();
      stackOne.display();
      if(stackOne.isEmpty()){
        cout << "List is empty" << endl;
      }
  }
  if(testCase == 2){
    Stack stackTwo;
    stackTwo.push(10);
    stackTwo.push(10);
    stackTwo.push(10);
    stackTwo.push(10);
    stackTwo.push(10);
    stackTwo.display();
    stackTwo.push(10);
  }
  if(testCase == 3){
    Stack stackThree;
    stackThree.push(10);
    stackThree.pop();
    stackThree.pop();
  }
  if(testCase == 4){
    Stack stackFour;
    stackFour.push(10);
    cout << stackFour.size() << endl;
    stackFour.push(10);
    cout << stackFour.size() << endl;
    stackFour.push(10);
    cout << stackFour.size() << endl;
    stackFour.push(10);
    cout << stackFour.size() << endl;
    stackFour.push(10);
    cout << stackFour.size() << endl;
    cout << "Clear list: " << endl;
    stackFour.clear();
    cout << stackFour.size() << endl;
    stackFour.display();
  }

  return 0;
}