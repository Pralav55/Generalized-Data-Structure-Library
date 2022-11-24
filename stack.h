#include<iostream>
using namespace std;

template<class T>
struct Node2
{
  T data;
  struct Node2 *next;
};

template<class T>
class Stack
{
  public:
     struct Node2<T> *Head;
     int Count;  
     
     Stack();
     void Push(T);    //InsertLast
     void Pop();     //DeleteFirst
     void Display();
     int CountNode();
};

template<class T>
Stack<T>::Stack()
{
  Head = NULL;
  Count =0;
}


template<class T>
void Stack<T>::Push(T no)
{
  struct Node2<T> *newn = NULL;
  newn = new Node2<T>;
  
  newn->data = no;
  newn->next = NULL;
  
  newn->next = Head;
  Head=newn;
  
  Count++;
}

template<class T>
void Stack<T>::Display()
{
  cout<<"Elements from Stack are :"<<endl;
  struct Node2<T> *temp = Head;
  
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
  return Count;
}

template<class T>
void Stack<T>::Pop()     //Delete First
{
  T no;
  
  if(Count == 0)
  {
    cout<<"Stack is empty"<<endl;
    return;
  }
  
  no = Head->data;
  struct Node2<T> *temp = Head;
  Head = Head->next;
  delete temp;
    
  Count--;
  cout<<"Removed element is : "<<no<<endl;
}

