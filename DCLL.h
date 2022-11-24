#include<iostream>
using namespace std;

template<class T>
struct node2 
{
  T data;
  struct node2 *next;
  struct node2 *prev;
};

template<class T>
class DoublyCLL
{
  private:
     struct node2<T>* Head;
     struct node2<T>* Tail;
     int CountNode;
     
  public:
     DoublyCLL();
     
     void InsertFirst(T);
     void InsertLast(T);
     void InsertAtPos(T,int);
     
     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
     
     int Count();
     void Display();
};

template<class T>
DoublyCLL<T>::DoublyCLL()
{
  Head = NULL;
  Tail = NULL;
  CountNode = 0;
}

template<class T>
void DoublyCLL<T>::InsertFirst(T iNo)
{
  struct node2<T>* newn = NULL;
  newn = new struct node2<T>;
  
  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL; 
  
  if(CountNode == 0) // if((Head == NULL) && (Tail == NULL))
  {
    Head = newn;
    Tail = newn;
  }
  else
  {
    newn->next = Head;
    Head->prev = newn;
    
    Head = newn;
  }
  Head->prev = Tail;
  Tail->next = Head;
  
  CountNode++;
}

template<class T>
void DoublyCLL<T>::InsertLast(T iNo)
{
  struct node2<T>* newn = NULL;
  newn = new struct node2<T>;
  
  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL; 
  
  if(CountNode == 0) // if((Head == NULL) && (Tail == NULL))
  {
    Head = newn;
    Tail = newn;
  }
  else
  {
    Tail->next = newn;
    newn->prev = Tail;
    Tail = newn;
  }
  Head->prev = Tail;
  Tail->next = Head;
  
  CountNode++;
}


template<class T>
void DoublyCLL<T>::InsertAtPos(T iNo,int iPos)
{
  if((iPos<1) ||(iPos>CountNode+1))
  {
    cout<<"Invalid position\n";
    return;
  }
  
  if(iPos == 1)
  {
    InsertFirst(iNo);
  }
  else if(iPos == CountNode+1)
  {
    InsertLast(iNo);
  }
  else
  {
    struct node2<T>* newn = NULL;
    newn = new struct node2<T>;
 
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL; 
    
    struct node2<T>* temp = Head;
    
    for(int i=1;i<iPos-1;i++)
    {
      temp = temp->next;
    }
    newn->next = temp->next;
    temp->next->prev = newn;
    temp->next = newn;
    newn->prev = temp;
    
    CountNode++;
  }
}

template<class T>
void DoublyCLL<T>::DeleteFirst()
{
  if(CountNode == 0)
  {
    return;
  }
  else if(CountNode == 1)
  {
    delete Head;
    Head = NULL;
    Tail = NULL;
  }
  else
  {
    Head = Head->next;
    delete(Tail->next);
  }
  Tail->next = Head;
  Head->prev = Tail;
  CountNode--;
}

template<class T>
void DoublyCLL<T>::DeleteLast()
{
  if(CountNode == 0)
  {
    return;
  }
  else if(CountNode == 1)
  {
    delete Head;
    Head = NULL;
    Tail = NULL;
  }
  else
  {
    Tail = Tail->prev;
    delete(Tail->next);
  }
  Tail->next = Head;
  Head->prev = Tail;
  CountNode--;
}

template<class T>
void DoublyCLL<T>::DeleteAtPos(int iPos)
{
  if((iPos<1) ||(iPos>CountNode))
  {
    cout<<"Invalid position\n";
    return;
  }
  
  if(iPos == 1)
  {
    DeleteFirst();
  }
  else if(iPos == CountNode)
  {
    DeleteLast();
  }
  else
  { 
    struct node2<T>* temp = Head;
    
    for(int i=1;i<iPos-1;i++)
    {
      temp = temp->next;
    }
    temp->next = temp->next->next;
    delete (temp->next->prev);
    temp->next->prev = temp;
    
    CountNode--;
  }
}

template<class T>
int DoublyCLL<T>::Count()
{
  return CountNode;
}

template<class T>
void DoublyCLL<T>::Display()
{
  int i=0;
  struct node2<T>* temp = Head;
  
  for(i=1;i<=CountNode;i++)
  {
    cout<<"|"<<temp->data<<"|<->";
    temp = temp->next;
  }
  cout<<"\n";
}

