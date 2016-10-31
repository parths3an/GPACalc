

class Stack
{
public: 
//Constructor 
Stack(int);

//Accessor function 
void isStack_full();
void isStack_empty();
int top(); 

//Mutator function 
void push(int);
void pop();

//Destructor
~Stack();


private:
//Declaring member variables.
int maxstack_size; 
int stacktop;
int *list;   

};

