#include"SLL.h"
#include"DLL.h"
#include"SCLL.h"
#include"DCLL.h"
#include"stack.h"
#include"Queue.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//					SINGLY LINEAR LINKED LIST
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Singly_Linear_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tSingly Linear Linked List -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;
	
	if(val == 1)
	{
		SinglyLL<int> obj1;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
	
		while(1)
		{
			int choose=0,iValue1=0,iValue2=0,iValue3=0,iPosition=0,iPoss=0,iRet=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInsert First :  ";
   					cin>>iValue1;
   					obj1.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \tInsert Last  :  ";
   					cin>>iValue2;
   					obj1.InsertLast(iValue2);
   					break;
   				
   				case 3:
   					cout<<" \tInsert At Position :  ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position :  ";
   					cin>>iPosition;
   					obj1.InsertAtPos(iValue3,iPosition);
   					break;
   				
   				case 4:
   					obj1.DeleteFirst();
   					break;
   					
   				case 5:
   					obj1.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"Delete At Position :  ";
   					cin>>iPoss;
   					obj1.DeleteAtPos(iPoss);
   					break;
   			
   				case 7:
   					obj1.Display();
   					break;
   				
   				case 8:
   					iRet = obj1.Count();
   					cout<<"Number of Elements : ";
   					cout<<iRet<<endl;
   					break;
   				
   				case 9:
   					return;
   			
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   			
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else if(val == 2)
	{
		SinglyLL<float> obj1;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			float iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInsert First  : ";
   					cin>>iValue1;
   					obj1.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \tInserted Last  : ";
   					cin>>iValue2;
   					obj1.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" Enter Element  : ";
   					cin>>iValue3;
   					cout<<"  Enter Position : ";
   					cin>>iPosition;
   					obj1.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj1.DeleteFirst();
   					break;
   					
   				case 5:
   					obj1.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"Delete At Position : ";
   					cin>>iPoss;
   					obj1.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj1.Display();
   					break;
   				
   				case 8:
   					obj1.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else if(val == 3)
	{
		SinglyLL<char> obj1;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			char iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInserted First  : ";
   					cin>>iValue1;
   					obj1.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \tInserted Last  : ";
   					cin>>iValue2;
   					obj1.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" Insert Element : ";
   					cin>>iValue3;
   					cout<<"  Enter Position : ";
   					cin>>iPosition;
   					obj1.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj1.DeleteFirst();
   					break;
   					
   				case 5:
   					obj1.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"Delete At Position : ";
   					cin>>iPoss;
   					obj1.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj1.Display();
   					break;
   				
   				case 8:
   					obj1.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}

	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return;
	}
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//					DOUBLY LINEAR LINKED LIST
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Doubly_Linear_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tDoubly Linear Linked List -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;
	
	if(val == 1)
	{
		Doubly_LinkedList<int> Dobj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			int iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInserted First  : ";
   					cin>>iValue1;
   					Dobj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \tInserted Last  : ";
   					cin>>iValue2;
   					Dobj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \t Insert Element : ";
   					cin>>iValue3;
   					cout<<"  Enter Position : ";
   					cin>>iPosition;
   					Dobj.InsertAtPosition(iValue3,iPosition);
   					break;
   					
   				case 4:
   					Dobj.DeleteFirst();
   					break;
   					
   				case 5:
   					Dobj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"Delete At Position : ";
   					cin>>iPoss;
   					Dobj.DeleteAtPosition(iPoss);
   					break;
   				
   				case 7:
   					Dobj.Display();
   					break;
   				
   				case 8:
   					Dobj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}

	}
	else if(val == 2)
	{
		Doubly_LinkedList<float> Dobj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			float iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInserted First  : ";
   					cin>>iValue1;
   					Dobj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \tInserted Last  : ";
   					cin>>iValue2;
   					Dobj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \tInsert Element : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					Dobj.InsertAtPosition(iValue3,iPosition);
   					break;
   					
   				case 4:
   					Dobj.DeleteFirst();
   					break;
   					
   				case 5:
   					Dobj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\t Delete At Position  : ";
   					cin>>iPoss;
   					Dobj.DeleteAtPosition(iPoss);
   					break;
   				
   				case 7:
   					Dobj.Display();
   					break;
   				
   				case 8:
   					Dobj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}

	}
	else if(val == 3)
	{
		Doubly_LinkedList<char> Dobj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			char iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInsert First  : ";
   					cin>>iValue1;
   					Dobj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					Dobj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \t Insert Element  : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					Dobj.InsertAtPosition(iValue3,iPosition);
   					break;
   					
   				case 4:
   					Dobj.DeleteFirst();
   					break;
   					
   				case 5:
   					Dobj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\t Delete At Position : ";
   					cin>>iPoss;
   					Dobj.DeleteAtPosition(iPoss);
   					break;
   				
   				case 7:
   					Dobj.Display();
   					break;
   				
   				case 8:
   					Dobj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}

	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return;
	}
	
	
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//				SINGLY CIRCULAR LINKED LIST
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Singly_Circular_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tSingly Circular Linked List -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;
	
	if(val == 1)
	{
		SinglyCLL<int> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			int iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInsert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \tInsert Element  : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\t Delete At Position  : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}

	}
	else if(val == 2)
	{
		SinglyCLL<float> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			float iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \t Insert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \tInsert Element  : ";
   					cin>>iValue3;
   					cout<<"  Enter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\t Delete At Position  : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else if(val == 3)
	{
		SinglyCLL<char> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			char iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \t Insert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \t Insert Element  : ";
   					cin>>iValue3;
   					cout<<"  Enter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"Delete At Position  : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return;
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//					DOUBLY CIRCULAR LINKED LIST
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Doubly_Circular_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tDoubly Circular Linked List -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;
	
	if(val == 1)
	{
		DoublyCLL<int> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			int iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<" \tInsert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<" \t Insert Element  : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\tDelete At Position  : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else if(val == 2)
	{
		DoublyCLL<float> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			float iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<"  \tInsert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last   : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<"  \t Insert Element  : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\tDelete At Position  : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else if(val == 3)
	{
		DoublyCLL<char> obj;
		
		cout<<"\t -------------------------------"<<endl;
		cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
		cout<<"\t| 2.Insert at Last\t\t|"<<endl;
		cout<<"\t| 3.Insert at Position\t\t|"<<endl;
		cout<<"\t| 4.Delete starting element\t|"<<endl;
		cout<<"\t| 5.Delete Last element\t\t|"<<endl;
		cout<<"\t| 6.Delete at Position\t\t|"<<endl;
		cout<<"\t| 7.Display all elements\t|"<<endl;
		cout<<"\t| 8.Count total elements\t|"<<endl;
		cout<<"\t| 9.Exit\t\t\t|"<<endl;
		cout<<"\t| 10.Help\t\t\t|"<<endl;
		cout<<"\t -------------------------------"<<endl;
		
		while(1)
		{
			int choose=0,iPosition=0,iPoss=0;
			char iValue1=0,iValue2=0,iValue3=0;
			
			cout<<" Enter choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
   					cout<<"  \tInsert First  : ";
   					cin>>iValue1;
   					obj.InsertFirst(iValue1);
   					break;
   					
   				case 2:
   					cout<<" \t Insert Last  : ";
   					cin>>iValue2;
   					obj.InsertLast(iValue2);
   					break;
   					
   				case 3:
   					cout<<"  \t Insert Element  : ";
   					cin>>iValue3;
   					cout<<"  \tEnter Position : ";
   					cin>>iPosition;
   					obj.InsertAtPos(iValue3,iPosition);
   					break;
   					
   				case 4:
   					obj.DeleteFirst();
   					break;
   					
   				case 5:
   					obj.DeleteLast();
   					break;
   				
   				case 6:
   					cout<<"\tDelete At Position   : ";
   					cin>>iPoss;
   					obj.DeleteAtPos(iPoss);
   					break;
   				
   				case 7:
   					obj.Display();
   					break;
   				
   				case 8:
   					obj.Count();
   					break;
   				
   				case 9:
   					return;
   				
   				case 10:
   					cout<<"\t -------------------------------"<<endl;
					cout<<"\t| 1.Insert at Beginning\t\t|"<<endl;
					cout<<"\t| 2.Insert at Last\t\t|"<<endl;
					cout<<"\t| 3.Insert at Position\t\t|"<<endl;
					cout<<"\t| 4.Delete starting element\t|"<<endl;
					cout<<"\t| 5.Delete Last element\t\t|"<<endl;
					cout<<"\t| 6.Delete at Position\t\t|"<<endl;
					cout<<"\t| 7.Display all elements\t|"<<endl;
					cout<<"\t| 8.Count total elements\t|"<<endl;
					cout<<"\t| 9.Exit\t\t\t|"<<endl;
					cout<<"\t| 10.Help\t\t\t|"<<endl;
					cout<<"\t -------------------------------"<<endl;
   					break;		
   				
   				default:
   					cout<<"Error : Invalid Choice"<<endl<<endl;
   			}
		}
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//							STACK
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Stack_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tStack -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;
	
	if(val == 1)
	{
		Stack <int>obj1;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.PUSH\t|"<<endl;
		cout<<"\t| 2.POP\t\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			int num1,num2,num3;
			
			cout<<"Enter choice : ";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter element : ";
					cin>>num1;
					obj1.Push(num1);
					break;
					
				case 2:
					obj1.Pop();
					break;
				
				case 3:
					obj1.Display();
					break;
				
				case 4:
					num2 = obj1.CountNode();
					cout<<"Total number of elements are : "<<num2<<endl;
					break;
				
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.PUSH\t|"<<endl;
					cout<<"\t| 2.POP\t\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
							
				case 6:
					return;
				
				default:
					cout<<"Invalid Choice"<<endl;	
			}	
		}
	}
	else if(val==2)
	{
		Stack <float>obj1;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.PUSH\t|"<<endl;
		cout<<"\t| 2.POP\t\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			float num1,num2,num3;
			
			cout<<"Enter choice : ";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter element : ";
					cin>>num1;
					obj1.Push(num1);
					break;
					
				case 2:
					obj1.Pop();
					break;
				
				case 3:
					obj1.Display();
					break;
				
				case 4:
					num2 = obj1.CountNode();
					cout<<"Total number of elements are : "<<num2<<endl;
					break;
				
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.PUSH\t|"<<endl;
					cout<<"\t| 2.POP\t\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
							
				case 6:
					return;
				
				default:
					cout<<"Invalid Choice"<<endl;	
			}	
		}
	}
	else if(val==3)
	{
		Stack <char>obj1;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.PUSH\t|"<<endl;
		cout<<"\t| 2.POP\t\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			char num1,num2,num3;
			
			cout<<"Enter choice : ";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter element : ";
					cin>>num1;
					obj1.Push(num1);
					break;
					
				case 2:
					obj1.Pop();
					break;
				
				case 3:
					obj1.Display();
					break;
				
				case 4:
					num2 = obj1.CountNode();
					cout<<"Total number of elements are : "<<num2<<endl;
					break;
				
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.PUSH\t|"<<endl;
					cout<<"\t| 2.POP\t\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
							
				case 6:
					return;
				
				default:
					cout<<"Invalid Choice"<<endl;
			}	
		}
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return;
	}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//						QUEUE
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Queue_Linked_List()
{
	int val=0;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\tQueue -\t\t\t"<<endl;
	cout<<" ------------------------------------------------------- "<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<"\t| \t1.Integer\t|"<<endl;
	cout<<"\t| \t2.Floating\t|"<<endl;
	cout<<"\t| \t3.Charater\t|"<<endl;
	cout<<"\t -----------------------"<<endl;
	cout<<" Enter Datatype :-";
	cin>>val;
	cout<<endl;

	if(val == 1)
	{
		Queue <int>obj2;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.Enqueue\t|"<<endl;
		cout<<"\t| 2.Dequeue\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			int num1,num2,num3;
			
			cout<<"Enter Choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter Element to be inserted in queue :";
					cin>>num1;
					obj2.Enqueue(num1);
					break;
				case 2:
					obj2.Dequeue();
					break;
				case 3:
					obj2.Display();
					break;
				case 4:
					num2 = obj2.CountNode();
					cout<<"Number of Elements in queue : "<<num2<<endl;
					break;
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.Enqueue\t|"<<endl;
					cout<<"\t| 2.Dequeue\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
				case 6:
					return;
				default:
					cout<<"Invalid choice"<<endl;
			}		
		}
	}
	else if(val == 2)
	{
		Queue <float>obj2;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.Enqueue\t|"<<endl;
		cout<<"\t| 2.Dequeue\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			float num1,num2;
			
			cout<<"Enter Choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter Element to be inserted in queue :";
					cin>>num1;
					obj2.Enqueue(num1);
					break;
				case 2:
					obj2.Dequeue();
					break;
				case 3:
					obj2.Display();
					break;
				case 4:
					num2 = obj2.CountNode();
					cout<<"Number of Elements in queue : "<<num2<<endl;
					break;
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.Enqueue\t|"<<endl;
					cout<<"\t| 2.Dequeue\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
				case 6:
					return;
					
				default:
					cout<<"Invalid choice"<<endl;
			}		
		}
	}
	else if(val == 3)
	{
		Queue <char>obj2;
		
		cout<<"\t ---------------"<<endl;
		cout<<"\t| 1.Enqueue\t|"<<endl;
		cout<<"\t| 2.Dequeue\t|"<<endl;
		cout<<"\t| 3.Display\t|"<<endl;
		cout<<"\t| 4.Count\t|"<<endl;
		cout<<"\t| 5.Help\t|"<<endl;
		cout<<"\t| 6.Exit\t|"<<endl;
		cout<<"\t ---------------"<<endl;
		
		while(1)
		{
			int choose;
			char num1,num2;
			
			cout<<"Enter Choice :";
			cin>>choose;
			
			switch(choose)
			{
				case 1:
					cout<<"Enter Element to be inserted in queue :";
					cin>>num1;
					obj2.Enqueue(num1);
					break;
				case 2:
					obj2.Dequeue();
					break;
				case 3:
					obj2.Display();
					break;
				case 4:
					num2 = obj2.CountNode();
					cout<<"Number of Elements in queue : "<<num2<<endl;
					break;
				case 5:
					cout<<"\t ---------------"<<endl;
					cout<<"\t| 1.Enqueue\t|"<<endl;
					cout<<"\t| 2.Dequeue\t|"<<endl;
					cout<<"\t| 3.Display\t|"<<endl;
					cout<<"\t| 4.Count\t|"<<endl;
					cout<<"\t| 5.Help\t|"<<endl;
					cout<<"\t| 6.Exit\t|"<<endl;
					cout<<"\t ---------------"<<endl;
					break;
				case 6:
					return;
					
				default:
					cout<<"Invalid choice"<<endl;
			}		
		}
	}
	else
	{
		cout<<"Invalid Input "<<endl;
		return;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//							MAIN FUNCTION
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	cout<<"Generalised Data Structure Library Started....."<<endl<<endl;
	
	while(1)
	{
		int iNum;
		cout<<"\t ---------------------------------------"<<endl;
		cout<<"\t|   Data Structure :\t\t\t|"<<endl;
  		cout<<"\t|\t"<<"1.Singly Linear Linked List\t|"<<endl;
    		cout<<"\t|\t"<<"2.Doubly Linear Linked List\t|"<<endl;
    		cout<<"\t|\t"<<"3.Singly Circular Linked List\t|"<<endl;
    		cout<<"\t|\t"<<"4.Doubly Circular Linked List\t|"<<endl;
    		cout<<"\t|\t"<<"5.Stack\t\t\t\t|"<<endl;
   		cout<<"\t|\t"<<"6.Queue\t\t\t\t|"<<endl;
   		cout<<"\t|\t"<<"7.Exit\t\t\t\t|"<<endl;
   		cout<<"\t ---------------------------------------"<<endl;
   		cout<<"\tEnter Choice : ";
   		cin>>iNum;
   		cout<<endl;
   		
   		switch(iNum)
   		{
   			case 1:
   				
   				Singly_Linear_Linked_List();
   				break;
   				
   			case 2:
   				Doubly_Linear_Linked_List();
   				break;
   				
   			case 3:
   				Singly_Circular_Linked_List();
   				break;
   				
   			case 4:
   				Doubly_Circular_Linked_List();
   				break;
   				
   			case 5:
   				Stack_Linked_List();
   				break;
   			
   			case 6:
   				Queue_Linked_List();
   				break;
   			
   			case 7:
   				return 0;
   			
   			default:
   				cout<<"Error : Invalid Choice"<<endl<<endl;
   		}
	}
	return 0;
}













