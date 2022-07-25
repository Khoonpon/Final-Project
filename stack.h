#ifndef stack_h
#define stack_h
#include "NODE.h"
using namespace std;

class Stack {
private:
  NodePtr top;
  int size;

public:
  Stack(NodePtr = NULL);
  ~Stack();
  int pop();
  void push(string);
};

Stack::Stack(NodePtr t) {
  if (t) {
    top = t;
    size = 1;
  } else {
    top = NULL;
    size = 0;
  }
}
void Stack::push(string n) {
  NodePtr new_node = new NODE(n);
  if (new_node) {
    new_node->set_next(top);
    top = new_node;
    size++;
  }
  // no need for else, if new_node return false then nothing will happen
}
int Stack::pop() {
  NodePtr t = top;
  string name;
  int value;
  if (t) {
    //size--;
    name=t->get_name();
    if (size > 0) {
      top = top->get_next();
    } else {
      top = NULL;
    }
    cout<<name<<" is ready to exit the hospital"<<endl;
    delete t;
    //return value;
  }
  //cout << "Empty stack" << endl;
  return 0;
}
Stack::~Stack() {
  
  int i;
  NodePtr t = top;
  cout << "==================================" << endl;
  cout << "There are " << size << " people left in the stack" << endl;
  for (i = 0; i < size; i++) {
    pop();
    /*top = top->get_next();
    delete t;
    t = top;*/
  }
  cout<<"Stack is empty." << endl;
}
#endif