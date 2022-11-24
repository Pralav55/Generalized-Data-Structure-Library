
#include<iostream>
using namespace std;

template<class T>
struct Node 
{
   T Data;
   Node * Next;
   Node * Previous;
};

template<class T>
class Doubly_LinkedList
{
    private:
         struct Node<T> * Head;
    
    public:
         Doubly_LinkedList();
         //~Doubly_LinkedList();
         void InsertFirst(T);
         void InsertLast(T);
         void  InsertAtPosition(T,int);
         void Display();
         int Count();
         void DeleteFirst();
         void  DeleteLast();
         void DeleteAtPosition(int);
};


template<class T>
Doubly_LinkedList<T> :: Doubly_LinkedList()
{
    Head = NULL;
}

/*template<class T>
Doubly_LinkedList<T> :: ~Doubly_LinkedList()
{
    struct Node<T> * Temp = Head;
    
    if(Head != NULL)
    {
        while(Head != NULL)
        {
            Head = Head->Next;
            delete Temp;
            Temp = Head;
        }
    }
}*/

template<class T>
void Doubly_LinkedList<T>:: InsertFirst(T iNo)
{
    struct Node <T>* newn = NULL;
    
    newn = new struct Node<T>;
    
    if(newn == NULL)
    {
        return;
    }
    
    newn->Next = NULL;
    newn->Previous = NULL;
    newn->Data = iNo;
    
    if(Head == NULL)
    {
       Head = newn;
    }
    else
    {
        Head->Previous = newn;
        newn->Next = Head;
        Head = newn;
    }
}

template<class T>
void Doubly_LinkedList<T> :: InsertLast(T iNo)
{
    struct Node <T>* newn = NULL;
    struct Node <T>* Temp = Head;
    
    newn = new struct Node<T>;
    
    if(newn == NULL)
    {
        return;
    }
    
    newn->Next = NULL;
    newn->Previous = NULL;
    newn->Data = iNo;
    
    if(Head == NULL)
    {
       Head  = newn;
    }
    else
    {
       while(Temp->Next != NULL)
       {
          Temp = Temp->Next;
       }
       Temp->Next = newn;
       newn->Previous = Temp;
    }
} 

template<class T>
void Doubly_LinkedList <T>:: InsertAtPosition(T iNo , int iPos)
{
    if((Head == NULL) || (iPos > (Count()+1)) || (iPos <= 0))
    {
        return;
    }
    
    if(iPos == 1)
    {
       return (InsertFirst(iNo));
    }
    else if(iPos == (Count())+1)
    {
       return (InsertLast(iNo));
    }
    else
    {
        struct Node<T> * newn = NULL;
        struct Node<T> * Temp = Head;
        
        newn = new struct Node<T>;
        if(newn == NULL)
        {
            return;
        }
        
        newn->Next = NULL;
        newn->Previous = NULL;
        newn->Data = iNo;
        
        for(int i=1 ; i<=(iPos-2) ; i++)
        {
           Temp = Temp->Next;
        }
        newn->Next = Temp->Next;
        Temp->Next->Previous = newn;
        newn->Previous = Temp;
        Temp->Next = newn;
    }
}

template<class T>
void Doubly_LinkedList<T> :: DeleteFirst()
{
    struct Node<T> * Temp = Head;
    
    if(Head == NULL)
    {
       return;
    }
    else
    {
       Head = Head->Next;
       Head->Previous = NULL;
       
       delete Temp;
    }
}

template<class T>
void Doubly_LinkedList<T> :: DeleteLast()
{
    if(Head == NULL)
    {
       return;
    }
    else if(Head->Next == NULL)
    {
       delete Head;
       Head = NULL;
    }
    else
    {
        struct Node<T> * Temp = Head;
        
        while((Temp->Next)!= NULL)
        {
           Temp = Temp->Next;
        }
        Temp->Previous->Next = NULL;
        delete Temp;
    }
}

template<class T>
void Doubly_LinkedList<T> :: DeleteAtPosition(int iPos)
{
    if((Head == NULL) || (iPos > Count()) || (iPos <= 0))
    {
       return;
    }
    else if(iPos ==1)
    {
       DeleteFirst();
    }
    else if(iPos == Count())
    {
       DeleteLast();
    }
    else
    {
       struct Node<T>* Temp = Head;
       
       for(int i=1; i<=(iPos-2) ; i++)
       {
          Temp = Temp->Next;
       }
       Temp->Next = Temp->Next->Next;
       delete Temp->Next->Previous;
       Temp->Next->Previous = Temp;
    }
}

template<class T>
void Doubly_LinkedList<T> :: Display()
{
    struct Node<T> * Temp = Head;
    
    while(Temp != NULL)
    {
        cout<<Temp->Data<<" <-> ";
        Temp = Temp->Next;
    }
    cout<<"NULL\n";
}

template<class T>
int Doubly_LinkedList<T> :: Count()
{
    struct Node<T> * Temp = Head;
    int iCnt = 0;
    
    while(Temp != NULL)
    {
       iCnt++;
       Temp= Temp->Next;
    }
    return iCnt;
}

