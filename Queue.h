#include<iostream>
using namespace std;

template<class T>
struct Node1
{
  T data;
  struct Node1 *next;
};

template<class T>
class Queue
{
  public:
     struct Node1<T> *Head;
     int Count;  
     
     Queue();
     void Enqueue(T);    //InsertLast
     void Dequeue();     //DeleteFirst
     void Display();
     int CountNode();
};

template<class T>
Queue<T>::Queue()
{
  Head = NULL;
  Count =0;
}


template<class T>
void Queue<T>::Enqueue(T no)
{
  struct Node1<T> *newn = NULL;
  newn = new Node1<T>;
  
  newn->data = no;
  newn->next = NULL;
  
  if(Head == NULL)
  {
    Head = newn;
  }
  else
  {
    struct Node1<T> *temp = Head;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
  }
  Count++;
}

template<class T>
void Queue<T>::Display()
{
  cout<<"Elements from Queue are :"<<endl;
  struct Node1<T> *temp = Head;
  
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
  return Count;
}

template<class T>
void Queue<T>::Dequeue()     //Delete First
{
  T no;
  
  if(Count == 0)
  {
    cout<<"Queue is empty"<<endl;
    return;
  }
  
  no = Head->data;
  struct Node1<T> *temp = Head;
  Head = Head->next;
  delete temp;
    
  Count--;
  cout<<"Removed element is : "<<no<<endl;
}

