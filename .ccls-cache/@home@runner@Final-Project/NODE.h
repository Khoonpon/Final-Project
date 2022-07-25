#include <iostream>

#ifndef node_h
#define  node_h
using namespace std;
class NODE{
	string name;
	NODE *nextPtr;
public:
	NODE(string);
	//~NODE();
  string get_name();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(string x){
	name=x;
	nextPtr=NULL;

}
string NODE::get_name(){
	return name;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}
/*
NODE::~NODE(){
	 //cout<<"There are no people left in the queue"<<endl;

}*/


#endif