#include<iostream>
using namespace std;

template<class T>
struct node
{
   T Data;
   struct node *Next;
};

template<class T>
class SinglyLL
{
    private:
          struct node<T> *Head;
          
    public:
         SinglyLL();
         ~SinglyLL();
         void InsertFirst(T);
         void InsertLast(T);
         void InsertAtPos(T,int);
         void DeleteFirst();
         void DeleteLast();
         void DeleteAtPos(int);
         void Display();
         int Count();
};

template<class T>
SinglyLL<T>:: SinglyLL()
{
   Head = NULL;
}

template<class T>
SinglyLL<T> :: ~SinglyLL()
{
     struct node<T> *Temp = NULL;
     struct node<T> *Navigate = NULL;
     
     if(Head !=NULL)
     {
         Navigate = Head;
         while(Navigate != NULL)
         {
              Temp = Navigate->Next;
              delete Navigate;
              Navigate = Temp;
         }
     }
}

template<class T>
void SinglyLL<T> ::InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;
    
    newn = new struct node<T>;
    if(newn == NULL)
    {
        return;
    }
    
    newn->Data = iNo;
    newn->Next = NULL;
    
    if(Head == NULL)
    {
       Head = newn;
    } 
    else
    {
        newn->Next = Head;
        Head = newn;
    }

}

template<class T>
void SinglyLL<T> ::InsertLast(T iNo)
{
   struct node<T> *newn = NULL;
    struct node<T> *Temp = Head;
    newn = new struct node<T>;
    
    if(newn == NULL)
    {
        return;
    } 
    
    newn->Next = NULL;
    newn->Data = iNo;
    
    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
         while(Temp->Next != NULL)
         {
             Temp = Temp->Next;
         }
         Temp->Next = newn;
    }

}

template<class T>
void SinglyLL<T> ::InsertAtPos(T iNo , int iPos)
{
    if((Head == NULL) || (iPos > Count()+1) || (iPos <= 0))
    {
        return;
    } 
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (Count())+1)
    {
        InsertLast(iNo);
    }
    else
    {
         struct node<T> *newn = NULL;
         struct node<T> *Temp = Head;
         
         newn = new struct node<T>;
         if(newn == NULL)
         {
            return;
         }
         newn->Next = NULL;
         newn->Data = iNo;
         
         for(int i=1; i<=(iPos-2) ; i++)
         {
             Temp = Temp->Next;
         }
         
         newn->Next = Temp->Next;
         Temp->Next = newn;
    }

}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
    struct node<T> *Temp = Head;
    
    if(Head == NULL)
    {
        return;
    }
    else
    {
       Head = Head->Next;
       free(Temp);
    }
}

template<class T>
void SinglyLL<T> ::DeleteLast()
{
   if(Head->Next == NULL)
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
        struct node<T> *Temp1 = Head;
        struct node<T> *Temp2 = NULL;
        
        while(Temp1->Next->Next != NULL)
        {
           Temp1  = Temp1 ->Next;
        }
        Temp2 = Temp1->Next;
        Temp1->Next = NULL;
        free(Temp2);
    }
}

template<class T>
void SinglyLL<T> :: DeleteAtPos(int iPos)
{
   if((Head == NULL) || (iPos > Count()) || (iPos <= 0))
    {
        return;
    } 
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Count())
    {
        DeleteLast();
    }
    else
    {
         struct node<T> *Temp1 = Head;
         struct node<T> *Temp2 = NULL;
         
         for(int i=1;i<=(iPos -2) ; i++)
         {
              Temp1 = Temp1->Next;
              ++i;   
         }
         Temp1 = Temp1->Next;
         Temp1->Next = Temp2->Next;
             
         delete Temp2;
    }
}

template<class T>
void SinglyLL<T> ::Display()
{
   struct node<T> *Temp = Head;
     
     while(Temp != NULL)
     {
         cout<<Temp->Data<<" -> ";
         Temp = Temp->Next;
     } 
     cout<<"NULL\n";
}

template<class T>
int SinglyLL<T> :: Count()
{
   struct node<T> *Temp = Head;
    int iCnt = 0;
    
    while(Temp != NULL)
    {
       iCnt++;
       Temp = Temp->Next;
    }
    return iCnt;
}

