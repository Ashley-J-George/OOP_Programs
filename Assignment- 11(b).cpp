#include<iostream>
#include<list>
using namespace std;

class queue
{
	list <int> l;
	
public:

	void enqueue(int x)
	{
		l.push_back(x);	
	}

	void dequeue()
	{
		l.pop_front();	
	}

	int front()
	{
		return l.front();
	}
	
	int rear()
	{
		return l.back();
	}
	void display()
	{
		cout<<"\nThe elements of queue are ";
		list<int> :: iterator i;
		for(i=l.begin();i!=l.end();i++)
		cout<<*i<<" ";
	}

};

int main()
{
	queue s;
	int v;
	cout<<"\n\n          QUEUE OPERATIONS\n";
	do
	{
		cout<<"\nMENU\n";	
		cout<<"\n1:INSERT ELEMENT";
		cout<<"\n2:DELETE ELEMENT";
		cout<<"\n3:DISPLAY FRONT ELEMENT";
		cout<<"\n4:DISPLAY REAR ELEMENT";
		cout<<"\n5:DISPLAY QUEUE";
		cout<<"\n6:EXIT\n";
		cin>>v;
		switch (v)
		{
			case 1: int x;
					cout<<"\nEnter the element = ";	   
			 		cin>>x;
			 		s.enqueue(x);
			 		break;
		
			case 2: s.dequeue();
		 		    break;
		
			case 3:	cout<<"\nThe front element = "<<s.front();	   
			 		break;
		
			case 4:	cout<<"\nThe rear element = "<<s.rear();	   
			 		break;
	
			case 5: s.display();
				    break;
			
			case 6: cout<<"\nExitted!\n";
					break;
			default: cout<<"\nInvalid option";		
		
		}
	}while(v!=6);

return 0;
};


























