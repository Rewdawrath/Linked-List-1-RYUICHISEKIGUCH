#include <iostream>
#include <string>
using namespace std;

class node
{private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
     };


typedef node* nodePtr;

node(int id,string name : id(id), next(nullptr)){
  
}

void node::print(){
  cout<<"ID: "<<id<<" , Name: " << name <<endl;
}

node::~node(){
    cout<<name<<"delete"<<endl;
}

void node::set_next(){
  next = next_node;
}

nodePtr node::get_next(){
   return next;
}



void node::set_next(nodePtr x){
     next=x;
}