#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
  // int testCase;
  // cout << "Enter test case: ";
  // cin >> testCase;
  // if(testCase == 1){
  //     Stack stackOne;
  //     cout << "Constructed Stack" << endl;
  //     cout << endl;
  //     stackOne.display();
  //     cout << "Push 10" << endl;
  //     cout << endl;
  //     stackOne.push(10);
  //     cout << "Stack" << endl;
  //     cout << endl;
  //     stackOne.display();
  //     cout << "Pop" << endl;
  //     cout << endl;
  //     stackOne.pop();
  //     stackOne.display();
  //     if(stackOne.isEmpty()){
  //       cout << "List is empty" << endl;
  //     }
  // }
  // if(testCase == 2){
  //   Stack stackTwo;
  //   stackTwo.push(10);
  //   stackTwo.push(10);
  //   stackTwo.push(10);
  //   stackTwo.push(10);
  //   stackTwo.push(10);
  //   stackTwo.display();
  //   stackTwo.push(10);
  // }
  // if(testCase == 3){
  //   Stack stackThree;
  //   stackThree.push(10);
  //   stackThree.pop();
  //   stackThree.pop();
  // }
  // if(testCase == 4){
  //   Stack stackFour;
  //   stackFour.push(10);
  //   cout << stackFour.size() << endl;
  //   stackFour.push(10);
  //   cout << stackFour.size() << endl;
  //   stackFour.push(10);
  //   cout << stackFour.size() << endl;
  //   stackFour.push(10);
  //   cout << stackFour.size() << endl;
  //   stackFour.push(10);
  //   cout << stackFour.size() << endl;
  //   cout << "Clear list: " << endl;
  //   stackFour.clear();
  //   cout << stackFour.size() << endl;
  //   stackFour.display();
  // }
  // if(testCase == 5){
  //   Stack stackFive;
  //   stackFive.push(10);
  //   stackFive.push(20);
  //   stackFive.push(30);
  //   stackFive.push(40);
  //   stackFive.push(50);
  //   stackFive.display();
  // }

  Stack userStack;
  int userChoice;
  int pushNum;
  int pushChoice;
  while(userChoice != 10){
    cout << "----- Learning The Stack Data Structure! -----" << endl;
    cout << "1: push()" << endl;
    cout << "2: pop()" << endl;
    cout << "3: isEmpty()" << endl;
    cout << "4: isFull()" << endl;
    cout << "5: display()" << endl;
    cout << "6: peek()" << endl;
    cout << "7: isFull()" << endl;
    cout << "8: change()" << endl;
    cout << "9: clear()" << endl;
    cout << "10: EXIT PROGRAM" << endl;
    cout << "Choose an option: ";
    cin >> userChoice;
    cout << endl;

    if(userChoice == 1){
      do{
        cout << "Choose value to push: ";
        cin >> pushNum;
        userStack.push(pushNum);
        cout << endl;
        cout << "----- Push another? (0 = No, 1 = Yes) -----" << endl;
        cin >> pushChoice;
      }
      while(pushChoice == 1);
    }
    if(userChoice == 2){
      do{
        cout << "Popped: " << userStack.pop() << endl;
        cout << "----- Pop another? (0 = No, 1 = Yes) -----" << endl;
        cin >> pushChoice;
      }
      while(pushChoice == 1);
    }
    if(userChoice == 3){
      if(userStack.isEmpty()){
        cout << "The stack is empty!" << endl;
      }
      else{
        cout << "The stack is not empty!" << endl;
      }
    }
    if(userChoice == 4){
      if(userStack.isFull()){
        cout << "The stack is full!" << endl;
      }
      else{
        cout << "The stack is not full!" << endl;
      }
    }
    if(userChoice == 5){
      userStack.display();
    }
  }

  return 0;
}