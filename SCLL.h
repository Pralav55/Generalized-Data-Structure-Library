#include<iostream>
using namespace std;

template<class T>
struct node1
{
    T data;
    struct node1 *next;
};

template<class T>
class SinglyCLL
{
    public:                          //characteristics
         struct node1<T> *Head;
         struct node1<T> *Tail;
    
    public:
         SinglyCLL();
         void InsertFirst(T);
         void InsertLast(T);
         void InsertAtPos(T,T);
         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(T);
         void Display();
         int Count();
};

template<class T>
SinglyCLL<T> :: SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

template<class T>
void SinglyCLL<T> :: InsertFirst(T iNo)
{
    struct node1<T>* newn = NULL;
    
    newn = new struct node1<T>;
    newn->data = iNo;
    newn->next = NULL;
   
    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    } 
    else
    {
       newn->next = Head;
       Head = newn;
    }
    Tail->next = Head;
}

template<class T>
void SinglyCLL<T> :: InsertLast(T iNo)
{
    struct node1<T>* newn = NULL;
    
    newn = new struct node1<T>;
    newn->data = iNo;
    newn->next = NULL;
    
    if((Head == NULL) && (Tail == NULL))
    {
       Head = newn;
       Tail = newn;
    }
    else
    {
       Tail->next = newn;
       Tail = newn;
    }
    Tail->next = Head;
}

template<class T>
void SinglyCLL<T> :: InsertAtPos(T iNo,T iPos)
{
    int iSize = Count();
    
    if((iPos<1) || (iPos>(iSize+1)))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    
    if(iPos == 1)
    {
       InsertFirst(iNo);
    }
    else if(iPos == (iSize+1))
    {
        InsertLast(iNo);
    }
    else 
    {
        struct node1<T> *newn = NULL;
        newn = new struct node1<T>;
        
        newn->data = iNo;
        newn->next = NULL;
        
        struct node1<T> *temp = Head;
        int iCnt = 0;
        
        for(iCnt = 1 ; iCnt< iPos-1 ; iCnt++)
        {
            temp = temp->next;
        }    
        
        newn->next = temp->next;
        temp->next = newn;
    }
}

template<class T>
void SinglyCLL<T> :: DeleteFirst()
{   
    if((Head == NULL) && (Tail == NULL))
    {
       return;
    }
    
    if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
       Head = Head->next;
       delete Tail->next;
       Tail->next = Head;
    }
}

template<class T>
void SinglyCLL<T> :: DeleteLast()
{
     if((Head == NULL) && (Tail == NULL))
     {
         return;
     }
     
     if(Head == Tail)
     {
          delete Tail;
          Head = NULL;
          Tail = NULL;
     }
     else
     {
         struct node1<T> *temp = Head;
         
         while(temp->next != Tail)
         {
             temp = temp->next;
         }       
         delete Tail;
         Tail = temp;
         Tail->next = Head;
     }
}

template<class T>
void SinglyCLL<T> :: DeleteAtPos(T iPos)
{
    int iSize = Count();
    
    if((iPos<1) || (iPos>iSize))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    
    if(iPos == 1)
    {
       DeleteFirst();
    }
    else if(iPos == iSize)
    {
       DeleteLast();
    }
    else
    {
        struct node1<T> *temp = Head;
        int iCnt=0;
        
        for(iCnt =1;iCnt<iPos-1;iCnt++)
        {
           temp = temp->next;
        }
        struct node1<T> *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}

template<class T>
void SinglyCLL<T> :: Display()
{
   struct node1<T> *temp = Head;
   
   if(Head == NULL && Tail == NULL)
   {
      return;
   }
   do
   {
       cout<<"|"<<temp->data<<"| ->";
       temp = temp->next;
   }while(temp != Tail->next);
}

template<class T>
int SinglyCLL<T> :: Count()
{
    struct node1<T> *temp = Head;
   int iCnt =0;
   
   if(Head == NULL && Tail == NULL)
   {
      return 0;
   }
   do
   {
       iCnt++;
       temp = temp->next;
   }while(temp != Tail->next);
   
   return iCnt;
}

