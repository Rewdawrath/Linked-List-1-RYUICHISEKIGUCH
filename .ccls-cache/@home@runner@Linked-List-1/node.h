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

node::~node(){
    cout<<name<<"delete"<<endl;
}


nodePtr node::get_next(){
   return next;
}

void node::set_next(nodePtr x){
     next=x;
}