#include "NODE.h"
using namespace std;

class Queue {
  NodePtr headPtr, tailPtr;

  int size;

public:
  void enqueue(string);
  int dequeue();
  Queue();
  ~Queue();
};

Queue::Queue() {
  size = 0;
  headPtr = NULL;
  tailPtr = NULL;
}
/*
Queue::~Queue(){

  int i;
  for(i=0;i<size;i++) dequeue();
}
*/

Queue::~Queue() {
  // /basically dequeue all*/
  int i;
  // string name;
  cout << "==================================" << endl;
  cout << "There are " << size << " people left in the queue" << endl;

  for (i = 0; i <= size; i++) {
    dequeue();
  }
  cout << "queue is empty." << endl;
}

void Queue::enqueue(string n) {
  NodePtr new_node = new NODE(n);
  if (new_node) {
    if (headPtr == NULL)
      headPtr = new_node;
    else
      tailPtr->set_next(new_node);

    tailPtr = new_node; // always change
    size++;
  }
}
int Queue::dequeue() {
  if (headPtr != NULL) {
    NodePtr t = headPtr;
    string name = t->get_name();
    headPtr = headPtr->get_next();
    if (headPtr == NULL) /* size==1 or  !headPtr*/
      tailPtr = NULL;
    //size--;
    cout<<name<<" has got their medicine"<<endl;
    cout << name <<" left the queue"<< endl;
    cout << "=================" << endl;
    delete t;
    // return value;
  }

  /*int i;

  for (i = 0; i < size; i++) {
    //something here
  }
  */
  // cout << "***Queue is empty***"<<endl;
  return -1;
}
